#include "triangulo.h"

void Triangulo::draw(GLfloat coord[2][3], GLfloat colors[3], GLfloat width){
    int x1, y1, x2, y2, x3, y3;

    x1 = coord[0][0];
    y1 = coord[1][0];

    x2 = coord[0][1];
    y2 = coord[1][1];

    x3 = coord[0][2];
    y3 = coord[1][2];

    linea.draw(x1,y1,x2,y2, colors, width);
    linea.draw(x2,y2,x3,y3, colors, width);
    linea.draw(x3,y3,x1,y1, colors, width);
}
