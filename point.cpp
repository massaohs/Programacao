#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

void Point::setX(float mx){ //declaracao da funcao para atribuir valor para x
    x = mx; //x do ponto recebe o valor passado como parametro
}

void Point::setY(float my){//declaracao da funcao para atribuir valor para y
    y = my; //y do ponto recebe o valor passado como parametro
}

void Point::setXY(float mx, float my){ //declaracao da funcao para atribuir valor para x e y simultaneamente
    x = mx; //x do ponto recebe o valor passado como parametro
    y = my; //y do ponto recebe o valor passado como parametro
}

float Point::getX(){ //declaracao da funcao para acessar o valor de x
    return x; //retorna o valor de x
}

float Point::getY(){ //declaracao da funcao para acessar o valor de y
    return y; //retorna o valor de y
}

Point Point::add(Point p1){ //funcao que realiza a soma de dois pontos
    Point retorno; //declara um objeto do tipo Point que sera usado para armazenar a soma das coordenadas
    retorno.x = x+p1.x; // coordenada x do objeto retorno recebe a soma das duas coordenadas x
    retorno.y = y+p1.y; // coordenada y do objeto retorno recebe a soma das duas coordenadas y
    return retorno; // retorna o objeto criado para armazenar temporariamente a soma
}

Point Point::sub(Point p1){ //funcao que realiza a subtracao de dois pontos
    Point retorno; //declara um objeto do tipo Point que sera usado para armazenar a subtracao das coordenadas
    retorno.x = x-p1.x; // coordenada x do objeto retorno recebe a subtracao das duas coordenadas x
    retorno.y = y-p1.y; // coordenada y do objeto retorno recebe a subtracao das duas coordenadas y
    return retorno; // retorna o objeto criado para armazenar temporariamente a soma
}

float Point::norma(){ //declaracao da funcao responsavel por retornar a distancia do ponto a origem
    return sqrt(x*x+y*y); //retorna o resultado da equacao da distancia de dois pontos, tendo como referencia a origem 0,0
}

void Point::translada(float a, float b){ //declaracao da funcao que translada o ponto
    x += a; // a variavel x é acrescida do parametro que informa a quantidade do deslocamento no eixo das abcissas
    y += b; // a variavel y é acrescida do parametro que informa a quantidade do deslocamento no eixo das ordenadas
}

void Point::imprime(){ //funcao que imprime na tela as coordenadas x y do ponto
    cout << "(" << x << ", " << y << ")"; //imprime na tela o ponto no formato (x, y)
}
