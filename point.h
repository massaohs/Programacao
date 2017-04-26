#ifndef POINT_H
#define POINT_H
/**
 * @brief Esta é a classe Point
 */
class Point{
private:
    ///Armazena a coordenada x do ponto
    float x;
    ///Armazena a coordenada y do ponto
    float y;
public:
    /**
     * @brief Este método "seta" o valor de x.
     * @param mx É o parâmetro que será fornecido pelo usuário.
     */
    void setX(float mx);
    /**
     * @brief Este método "seta" o valor de y.
     * @param my É o parâmetro que será fornecido pelo usuário.
     */
    void setY(float my);
    /**
     * @brief Este método "seta" um objeto.
     * @param mx É a coordenada x fornecida pelo usuário.
     * @param my É a coordenada y fornecida pelo usuário.
     */
    void setXY(float mx, float my);
    /**
     * @brief  Recupera a coordenada x fornecida pelo usuário.
     * @return Retorna a coordenada x.
     */
    float getX();
    /**
     * @brief  Recupera a coodenada y fornecida pelo usuário.
     * @return Retorna a coordenada y.
     */
    float getY();
    /**
     * @brief Este método soma ao objeto um ponto fornecido pelo usuário.
     * @param p1 É o ponto fornecido pelo usuário.
     * @return Retorna a nova configuração do objeto.
     */
    Point add(Point p1);
    /**
     * @brief Este método subtrai do objeto um ponto fornecido pelo usuário.
     * @param p1 É o ponto fornecido pelo usuário.
     * @return Retorna a nova configuração do objeto.
     */
    Point sub(Point p1);
    /**
     * @brief Este método calcula a distância do objeto até a origem.
     * @return Retorna o valor da distância do obejto até a origem.
     */
    float norma();
    /**
     * @brief Este método desloca o objeto no plano xy.
     * @param a É o parâmetro fornecido pelo usuário que fará o deslocamento no eixo das abscissas.
     * @param b É o parâmetro fornecido pelo usuário que fará o deslocamento no eixo das ordenadas.
     */
    void translada(float a, float b);
    ///Este método imprime os valores x e y do objeto.
    void imprime();
};

#endif // POINT_H
