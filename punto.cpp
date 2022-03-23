#include <GL/glut.h>
#include <iostream>

class Punto {
public:
    void draw(int ix, int iy, GLfloat red, GLfloat green, GLfloat blue, GLfloat width)
    {
        glColor3f(red, green, blue);
        glPointSize(width);

        glBegin(GL_POINTS);
            glVertex2i(ix, iy);
        glEnd();
    }

};

