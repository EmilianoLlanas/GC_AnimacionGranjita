#include <GL/glut.h>
#include <iostream>

#include <math.h>
#define PI 3.14159265

#include "linea.cpp"

class Circulo {
    Linea linea;
public:
    void draw(GLfloat radio, GLfloat xcentro, GLfloat ycentro, GLfloat colors[3], GLfloat width){

     GLfloat x1, y1, x2, y2, rad;

     x1 = xcentro;
     y1 = ycentro;

     x2 = xcentro + radio * ((cos(0)) * (180/PI));
     y2 = ycentro + radio * ((sin(0)) * (180/PI));

    for (int i=1; i<360; i++)
    {
            rad = i * (PI/180);

            x1 = x2;
            y1 = y2;

            x2 = xcentro + radio * ((cos(rad)) * (180/PI));
            y2 = ycentro + radio * ((sin(rad)) * (180/PI));

            linea.draw(x1,y1,x2,y2, colors, width);


    }
 }


};
