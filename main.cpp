#include <iostream>
#include <iomanip>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int menu_principal();
int menu_secundario(int opcao);


int main()
{
    int opcao, opcao2, n;

    opcao = menu_principal();

    if(opcao == 0){
        return 0;
    }

    else if(opcao == 1){
        Poligono pol;
        float x, y;
        cout << "Insira a quantidade de pontos do poligono: \n";
        cin >> n;
        for (int i=0; i<n; i++){
            cout << "Insira as coordenadas do ponto " << i << ": \n";
            cin >> x >> y;
            pol.addVert(x, y);
        }

        opcao2 = menu_secundario(opcao);

        if(opcao2 == 0){
            return 0;
        }
        if(opcao2 == 1){
            pol.imprime();
            cout << endl;
        }
        else if(opcao2 == 2){
            cout << "Area do poligono: " << pol.area();
            cout << endl;
        }
        else if(opcao2 == 3){
            int a, b;
            cout << "Informe os valores para transladar o poligono em x e y:";
            cin >> a >> b;
            pol.transladaPol(a, b);
            cout << "Poligono transladado: \n";
            pol.imprime();
            cout << endl;
        }
        else if(opcao2 == 4){
            int a, b, angulo;
            cout << "Informe a coordenada referencia para rotacao e em seguida o angulo:";
            cin >> a >> b >> angulo;
            pol.rotaciona(angulo, a, b);
            cout << "Poligono rotacionado: \n";
            pol.imprime();
            cout << endl;
        }
        else{
            return -1;
        }
    }

    else if(opcao == 2){
        float x, y, largura, altura;
        cout << "Insira as coordenadas do ponto superior esquerdo do retangulo: \n";
        cin >> x >> y;
        cout << "Insira a largura e a altura do retangulo: \n";
        cin >> largura >> altura;
        Retangulo ret(x, y, largura, altura);

        opcao2 = menu_secundario(opcao);

        if(opcao2 == 0){
            return 0;
        }
        if(opcao2 == 1){
            ret.imprime();
            cout << endl;
        }
        else if(opcao2 == 2){
            cout << "Area do retangulo: " << ret.area();
            cout << endl;
        }
        else if(opcao2 == 3){
            float a, b;
            cout << "Informe os valores para transladar o retangulo em x e y: ";
            cin >> a >> b;
            ret.transladaPol(a, b);
            cout << "Retangulo transladado: \n";
            ret.imprime();
            cout << endl;
        }
        else if(opcao == 4){
            float a, b, angulo;
            cout << "Informe a coordenada referencia para rotacao e em seguida o angulo:";
            cin >> a >> b >> angulo;
            ret.rotaciona(angulo, a, b);
            cout << "Retangulo rotacionado: \n";
            ret.imprime();
            cout << endl;
        }
        else{
            return -1;
        }

    }

    else{
        return -1;
    }

    return 0;
}

int menu_principal(){
    cout << "MENU PRINCIPAL: \n";

    cout << setw(35) << left << "(0)Sair do programa;" << endl;
    cout << setw(35) << left << "(1)Inserir pontos do poligono;";
    cout << setw(35) << left << "(2)Inserir os dados do retangulo." << endl;

    int n;

    cout << "Digite a opcao desejada(0 a 2):  ";
    cin >> n;

    cout << endl;

    return n;
}

int menu_secundario(int opcao){
    cout << "MENU SECUNDARIO: \n";

    if(opcao == 1){
        cout << setw(35) << left << "(0)Sair do programa;" << endl;
        cout << setw(35) << left << "(1)Imprimir o poligono;";
        cout << setw(35) << left << "(2)Calcular a area do poligono;" << endl;
        cout << setw(35) << left << "(3)Transladar poligono;";
        cout << setw(35) << left << "(4)Rotacionar poligono;" << endl;
    }
    else if(opcao == 2){
        cout << setw(35) << left << "(0)Sair do programa;" << endl;
        cout << setw(35) << left << "(1)Imprimir o retangulo;";
        cout << setw(35) << left << "(2)Calcular a area do retangulo;" << endl;
        cout << setw(35) << left << "(3)Transladar retangulo;";
        cout << setw(35) << left << "(4)Rotacionar retangulo." << endl;
    }

    int n;

    cout << "Digite a opcao desejada(0 a 4):  ";
    cin >> n;

    cout << endl;

    return n;
}
