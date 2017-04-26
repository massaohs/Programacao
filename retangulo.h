#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
/**
 * @brief Esta é a classe Retangulo que é uma subclasse de Poligono.
 */
class Retangulo : public Poligono
{
public:
    /**
     * @brief Construtor da classe Retangulo.
     * @param x É a coordenada x do canto superior esquerdo fornecido pelo usuário.
     * @param y É a coordenada y do canto superior esquerdo fornecido pelo usuário.
     * @param largura É a largura do retângulo.
     * @param altura É a altura do retângulo.
     */
    Retangulo(float x, float y, float largura, float altura);
};
#endif // RETANGULO_H
