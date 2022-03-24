#include <GL/glut.h>
#include <iostream>

#include <math.h>
#define PI 3.14159265

#include "linea.cpp"

class Circulo {
private:
    Linea linea;
public:
    void draw(GLfloat coord[3], GLfloat colors[3], GLfloat width){

     GLfloat radio, x, y, x1, y1, x2, y2, rad;

     radio = coord[0];
     x = coord[1];
     y = coord[2];

     x1 = x;
     y1 = y;

     x2 = x + radio * ((cos(0)) * (180/PI));
     y2 = y + radio * ((sin(0)) * (180/PI));

    for (int i=1; i<360; i++)
    {
            rad = i * (PI/180);

            x1 = x2;
            y1 = y2;

            x2 = x + radio * ((cos(rad)) * (180/PI));
            y2 = y + radio * ((sin(rad)) * (180/PI));

            linea.draw(x1,y1,x2,y2, colors, width);


    }
 }


};
