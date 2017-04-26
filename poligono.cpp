#include "poligono.h"
#include <cmath>
#include <iostream>

using namespace std;

Poligono::Poligono() //declaracao do construtor padrao da classe poligono
{
    N=0; //inicializa o numero de vertices com o valor 0
}

void Poligono::addvert(Point p){ //declaracao da funcao que adiciona um vertice ao poligono, tendo como parametro um objeto do tipo Point
    vertices[N].setX(p.getX()); // atribui valor a coordenada x do vertice do poligono a partir da coordenada x do ponto recebido
    vertices[N].setY(p.getY()); // atribui valor a coordenada y do vertice do poligono a partir da coordenada y do ponto recebido
    N++; //Incrementa a quantidade de vertices em uma unidade
}

void Poligono::addVert(float mx, float my){ //declaracao da funcao que adiciona um vertice ao poligono, tendo como parametro dois floats, um para cada coordenada
    vertices[N].setXY(mx,my); //atribui simultaneamente valores as coordenadas x e y a partir dos dois flutuantes recebidos como parametro
    N++; //Incrementa a quantidade de vertices em uma unidade
}

int Poligono::getQtdVert() //funcao que retorna a quantidade de vertices que o poligono possui
{
    return N; //retorna a quantidade de vertices
}

float Poligono::area(){ //funcao responsavel por calcular a area do poligono utilizando o metodo conhecido como shoe lace, faz-se necessario assumir que os pontos estejam ordenados no sentido anti-horario
    float A = 0; //inicializa uma variavel auxiliar com 0 que servira como somador para calcular o valor da area
    for (int i = 0; i<N-1; i++){ //laco que percorre todos os vertices do poligono
        A += (vertices[i].getX()*vertices[i+1].getY() - vertices[i].getY()*vertices[i+1].getX());  //aplicacao da formula "shoe lace"
    }
    A += (vertices[N-1].getX()*vertices[0].getY() - vertices[N-1].getY()*vertices[0].getX()); //aplicacao da formula "shoe lace"
    A *= 0.5; //aplicacao da formula "shoe lace"

    if (A < 0) A = A * -1; //garante o valor de A positivo

    return A; //retorna a area calculada
}

void Poligono::transladaPol(float a, float b){ //declaracao da funcao que translada todos os pontos do poligono, utilizando a funcao ja existente que translada o ponto
    for(int i=0; i<N; i++){ //laco que percorre todos os vertices do poligono
        vertices[i].translada(a, b); //chama o metodo da classe ponto que translada o ponto de acordo com os parametros passados
    }
}

void Poligono::rotaciona(float angulo, float x0, float y0){ //declaracao da funcao que calcula a rotacao de um poligono utilizando a matriz de rotacao
    angulo *= 0.0174533; //conversao da unidade para radianos

    for(int i=0; i<N; i++){ //laco que percorre todos os vertices do poligono
        vertices[i].setXY(vertices[i].getX()-x0, vertices[i].getY()-y0); //transladar os vertices do poligono ate o ponto referencia passado como parametro
        vertices[i].setXY(vertices[i].getX()*cos(angulo)-vertices[i].getY()*sin(angulo), vertices[i].getX()*sin(angulo)+vertices[i].getY()*cos(angulo)); //rotacionar os vertices do poligono de acordo com o angulo passado como parametro
        vertices[i].setXY(vertices[i].getX()+x0, vertices[i].getY()+y0); //transladar para a posicao final dos vertices
    }

}

void Poligono::imprime(){ //declaracao da funcao para imprimir o poligono na tela
    for(int i=0; i<N; i++){ //laco que percorre todos os vertices do poligono
       std::cout << "(" << vertices[i].getX() << "," << vertices[i].getY() << ")"; //imprime os vertices do poligono no formato "(x0,y0)->(x1,y1)->..."
       if(i+1<N){ //condicao para evitar que apos o ultimo ponto apareca um "->" desnecessariamente
           std::cout << "->"; //imprime "->" entre os pontos para organizar
       }
    }
}




