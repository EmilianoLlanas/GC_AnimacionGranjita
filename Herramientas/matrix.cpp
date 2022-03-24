#include <math.h>
#include <iostream>

#include <GL/glut.h>
#include "matrix.h"

#define PI 3.14159265

void MatrixOP::mult(GLdouble (&matrixA)[3][3], GLdouble (&matrixB)[3][3]) {
    GLdouble mul[3][3];

    // Multiply
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            mul[i][j]=0;

            for(int k=0;k<3;k++) {
                mul[i][j]+= matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Assign Values
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            matrixA[i][j] = mul[i][j];
        }
    }
}

void MatrixOP::translation(GLdouble x, GLdouble y, GLdouble (&matrix) [3][3]) {

    GLdouble transalteMatrix [3][3] = {{1,0,x}, {0,1,y}, {0,0,1}};

    mult(matrix, transalteMatrix);

}

void MatrixOP::scaling(GLdouble x, GLdouble y, GLdouble (&matrix) [3][3]) {

    GLdouble escaleMatrix [3][3] = {{x,0,0}, {0,y,0}, {0,0,1}};

    mult(matrix, escaleMatrix);

}

void MatrixOP::rotation(GLdouble theta, GLdouble (&matrix) [3][3]) {

    GLdouble rotationMatrix [3][3] = {{cos(theta*PI/180), -sin(theta*PI/180), 0},
                                  {sin(theta*PI/180), cos(theta*PI/180), 0},
                                  {0,0,1}};

    mult(matrix, rotationMatrix);

}

void MatrixOP::multiplication(GLdouble (&operation) [3][3], GLdouble *points, GLdouble *render, int lenght) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<lenght;j++) {
            render[j+i*lenght] = 0;

            for(int k=0;k<3;k++) {
                render[j+i*lenght] += operation[i][k] * points[j+lenght*k];
            }
        }
    }
}
