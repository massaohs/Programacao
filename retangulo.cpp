#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float largura, float altura) //declaracao do construtor da classe Retangulo
{
    Retangulo::addVert(x, y); //ponto superior esquerdo do retangulo
    Retangulo::addVert(x, y-altura); //ponto inferior esquerdo do retangulo
    Retangulo::addVert(x+largura, y-altura); //ponto inferior direito do retangulo
    Retangulo::addVert(x+largura, y); //ponto superior direito do retangulo
}
