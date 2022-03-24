#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <math.h>
#include <GL/glut.h>

class MatrixOP {

private:
    void mult(GLdouble (&matrixA)[3][3], GLdouble (&matrixB)[3][3]);

public:
    void translation(GLdouble x, GLdouble y, GLdouble (&matrix) [3][3]);

    void scaling(GLdouble x, GLdouble y, GLdouble (&matrix) [3][3]);

    void rotation(GLdouble theta, GLdouble (&matrix) [3][3]);

    void multiplication(GLdouble (&operation) [3][3], GLdouble *points, GLdouble *render, int lenght);
};

#endif // MATRIX_H_INCLUDED
