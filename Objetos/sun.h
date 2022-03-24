#ifndef SUN_H_INCLUDED
#define SUN_H_INCLUDED

#include <GL/glut.h>
#include <iostream>
#include "../Herramientas/matrix.h"
#include "linea.h"
#include "circulo.h"
#include "triangulo.h"

#include <math.h>
#define PI 3.14159265

#define POINTS 25

class Sun {
private:
    GLfloat radio = 1;

    Linea linea;
    Circulo circulo;
    Triangulo triangulo;

    GLfloat scale = 0.5, x = -650, y=2;//x = -650, y=100;

    GLdouble globalPoints [3][POINTS];
    GLdouble renderMatrix [3][POINTS];
    GLdouble opMatrix [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    MatrixOP matrix;

    void loadGlobalPoints();

    void createSun();


public:
    void scaling(GLfloat newscale);

    void draw(GLfloat newscale, GLfloat newx);

    void update();

    Sun();
};



#endif // SUN_H_INCLUDED
