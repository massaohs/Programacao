#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
/**
 * @brief Esta é a classe Poligono.
 */
class Poligono{
private:
    ///Vetor de pontos responsavel por armazenas todas as coordenadas do polígono, limitado a 100 vértices.
    Point vertices[100];
    ///variavel que guarda a quantidade de pontos que o poligono possui.
    int N;
public:
    ///Este é o construtor da classe Poligono.
    Poligono();
    /**
     * @brief Este método serve para adicionar um ponto ao polígono, tendo como parametro um objeto do tipo Point.
     * @param p É um ponto fornecido pelo usuário.
     */
    void addvert(Point p);
    /**
     * @brief Este método serve para adicionar pontos ao polígono.
     * @param mx É a coordenada x do ponto.
     * @param my É a coordenada y do ponto.
     */
    void addVert(float mx, float my);
    ///Este método retorna a quantidade de vértices que o polígono possui.
    int getQtdVert();
    /// Este método retorna o cálculo da área do polígono.
    float area();
    /**
     * @brief Este método desloca o polígono no plano xy.
     * @param a É o parâmetro fornecido pelo usuário que fará o deslocamento no eixo das abscissas.
     * @param b É o parâmetro fornecido pelo usuário que fará o deslocamento no eixo das ordenadas.
     */
    void transladaPol(float a, float b);
    /**
     * @brief Este método rotacionará o polígono tetha graus em torno de um ponto.
     * @param angulo É o angulo em graus fornecido pelo usuário.
     * @param x0 É a coordenada x do ponto fornecido pelo usuário.
     * @param y0 É a coordenada y do ponto fornecido pelo usuário.
     */
    void rotaciona(float angulo, float x0, float y0);
    ///Este método imprime a configuração do polígono.
    void imprime();
};

#endif // POLIGONO_H
