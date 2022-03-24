#ifndef COTTAGE_H_INCLUDED
#define COTTAGE_H_INCLUDED

#include <GL/glut.h>
#include "../Herramientas/matrix.h"
#include "linea.h"

#define POINTS 128

class Cottage {

private:
    Linea linea;
    MatrixOP matrix;

    GLdouble globalPoints [3][POINTS];
    GLdouble renderMatrix [3][POINTS];
    GLdouble opMatrix [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    GLdouble defaultScale[2] = {0,0};
    GLdouble defaultTranslation[2] = {0,0};
    GLdouble defaultRotation[2] = {0,0};

    void loadGlobalPoints();

    void createWall();

    void createWindow();

    void createStairs();

    void createStick();

    void createRoof();

public:

    void draw();

    void setDefaulScale(GLdouble x, GLdouble y);

    void setDefaultTranslation(GLdouble x, GLdouble y);

    void setDefaultRotation(GLdouble x, GLdouble y);

    Cottage();
};


#endif // COTTAGE_H_INCLUDED
