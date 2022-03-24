#include "punto.h"

void Punto::draw(int ix, int iy, GLfloat colors[3], GLfloat width)
{
    glColor3fv(colors);
    glPointSize(width);

    glBegin(GL_POINTS);
        glVertex2i(ix, iy);
    glEnd();
}
