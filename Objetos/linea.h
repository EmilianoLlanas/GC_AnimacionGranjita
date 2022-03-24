#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED

#include <GL/glut.h>
#include "punto.h"

class Linea {
    Punto punto;
public:
    void draw(int x1,int y1,int x2,int y2, GLfloat colors[3], GLfloat width);
};

#endif // LINEA_H_INCLUDED
