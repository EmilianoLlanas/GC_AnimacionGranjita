#ifndef VACA_H_INCLUDED
#define VACA_H_INCLUDED

#include <GL/glut.h>
#include "../Herramientas/matrix.h"
#include "linea.h"

#define POINTS 128

class Vaca {

private:
    Linea linea;
    MatrixOP matrix;

    GLdouble altura;
    GLdouble incrementoCabeza;

    GLdouble rotar;
    GLdouble incremento;

    bool invertir;
    bool invertir2;

    GLdouble globalPoints [3][POINTS];
    GLdouble renderMatrix [3][POINTS];

    GLdouble headPoints [3][POINTS];
    GLdouble renderHeadMatrix [3][POINTS];

    GLdouble opMatrix [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
    GLdouble opMatrixHead [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    GLdouble defaultScale[2] = {0,0};
    GLdouble defaultTranslation[2] = {0,0};
    GLdouble defaultRotation[2] = {0,0};

    void loadGlobalPoints();

    void createTorso();

    void createCabeza();

    void rotateHead();

public:

    void draw();

    void setDefaulScale(GLdouble x, GLdouble y);

    void setDefaultTranslation(GLdouble x, GLdouble y);

    void setDefaultRotation(GLdouble x, GLdouble y);

    void update();

    Vaca();
};

#endif // VACA_H_INCLUDED
