#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include <GL/glut.h>
#include <iostream>

#include <math.h>
#define PI 3.14159265

#include "linea.h"

class Circulo {
private:
    Linea linea;
public:
    void draw(GLfloat coord[3], GLfloat colors[3], GLfloat width);
};

#endif // CIRCULO_H_INCLUDED
