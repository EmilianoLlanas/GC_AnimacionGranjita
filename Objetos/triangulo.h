#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include <GL/glut.h>
#include <iostream>

#include "linea.h"

class Triangulo{
private:
    Linea linea;

public:
    void draw(GLfloat coord[2][3], GLfloat colors[3], GLfloat width);
};

#endif // TRIANGULO_H_INCLUDED
