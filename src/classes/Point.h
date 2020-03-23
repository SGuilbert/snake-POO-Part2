/**
classe permettant l'affichage d'un point
*/

#ifndef POINT_H
#define POINT_H

#include "Board.h"
class Board;
class Point
{
public:
    /** Default constructor */
    Point();
    /** Constructeur */
    Point(int x, int y);

    Point(char unCar);

    Point(int x, int y, char unCar);

    /** Default destructor */
    virtual ~Point();

    void setPoint(int x, int y);
    /**
        Move point up
    */
    void moveUp();
    /**
        Move point down
    */
    void moveDown();
    /**
        Move point left
    */
    void moveLeft();
    /**
        Move point up
    */
    void moveRight();

    /** Access m_x
     * \return The current value of m_x
     */
    int getX() const;
    /** Set m_x
     * \param val New value to set
     */
    void setX(int val);
    /** Access m_y
     * \return The current value of m_y
     */
    int getY() const;
    /** Set m_y
     * \param val New value to set
     */
    void setY(int val);

    /**
    *   dessine le point
    */
    void drawPoint();
    /**
    *   efface le point
    */
    void erasePoint();
    /**
    *   Affiche les coordonnées
    */
    void debug();
    /** Access caractere
     * \return The current value of caractere
     */
    char getChar();

    /** Set carractere
     * \param val New value to set
     */
    void setChar(char val);
protected:

private:
    int m_x; //!< Member variable "m_x"
    int m_y; //!< Member variable "m_y"
    char m_caractere; //!< Member variable "caractere"
};

/**les opérateurs (== , += , && ....)
* ils sont déclarés à l'exterieur de la classe
**/
namespace std
{
    /** Opérateur de comparaison
     * Il est déclaré dans le namespace std pour être utilisable
     * directement (using name space std;)
     * \param a un Point
     * \param b un Point
     */
    bool operator==(Point const& a, Point const& b);
}

#endif // POINT_H
