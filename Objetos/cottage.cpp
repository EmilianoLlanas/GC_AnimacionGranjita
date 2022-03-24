#include <GL/glut.h>

#include "../Herramientas/matrix.h"
#include "linea.h"
#include "cottage.h"

void Cottage::loadGlobalPoints() {
    int i;

    //Wall Left-Right Points
    for (i = 0; i < 5; i++) {
        globalPoints[0][i] = 0;
        globalPoints[1][i] = 2*i;
        globalPoints[2][i] = 1;

        globalPoints[0][i+6] = 11;
        globalPoints[1][i+6] = 2*i;
        globalPoints[2][i+6] = 1;
    }

    globalPoints[0][5] = 0;
    globalPoints[1][5] = 9;
    globalPoints[2][5] = 1;

    globalPoints[0][11] = 11;
    globalPoints[1][11] = 9;
    globalPoints[2][11] = 1;

    //Window Left-Right Points
    for (i = 0; i < 2; i++) {
        globalPoints[0][i+12] = 5;
        globalPoints[1][i+12] = 4*i+4;
        globalPoints[2][i+12] = 1;

        globalPoints[0][i+14] = 8;
        globalPoints[1][i+14] = 4*i+4;
        globalPoints[2][i+14] = 1;
    }

    //Window Middle Points
    globalPoints[0][16] = 7;
    globalPoints[1][16] = 4;
    globalPoints[2][16] = 1;

    globalPoints[0][17] = 7;
    globalPoints[1][17] = 8;
    globalPoints[2][17] = 1;

    globalPoints[0][18] = 5;
    globalPoints[1][18] = 6;
    globalPoints[2][18] = 1;

    globalPoints[0][19] = 8;
    globalPoints[1][19] = 6;
    globalPoints[2][19] = 1;

    //Stairs Points
    for (i = 0; i < 3; i++) {
        globalPoints[0][i+22] = 11;
        globalPoints[1][i+22] = i;
        globalPoints[2][i+22] = 1;

        globalPoints[0][i+25] = 12;
        globalPoints[1][i+25] = i;
        globalPoints[2][i+25] = 1;
    }

    globalPoints[0][28] = 13;
    globalPoints[1][28] = 0;
    globalPoints[2][28] = 1;

    globalPoints[0][29] = 13;
    globalPoints[1][29] = 1;
    globalPoints[2][29] = 1;

    //Stick Point
    for (i = 0; i < 2; i++) {
        globalPoints[0][i+30] = 14.5;
        globalPoints[1][i+30] = i*9;
        globalPoints[2][i+30] = 1;

        globalPoints[0][i+32] = 15;
        globalPoints[1][i+32] = i*9;
        globalPoints[2][i+32] = 1;
    }

    //First Roof (34 - 55)
    int inc = 0;
    for (i = 0; i < 11; i++) {

        globalPoints[0][i+34] = inc;
        globalPoints[1][i+34] = 9;
        globalPoints[2][i+34] = 1;

        globalPoints[0][i+45] = inc;
        globalPoints[1][i+45] = 10;
        globalPoints[2][i+45] = 1;

        inc += 2 - i%2;
    }

    //Second Roof (56 - 75)
    inc = 0;
    for (i = 0; i < 10; i++) {

        globalPoints[0][i+56] = inc;
        globalPoints[1][i+56] = 10;
        globalPoints[2][i+56] = 1;

        globalPoints[0][i+66] = inc;
        globalPoints[1][i+66] = 11;
        globalPoints[2][i+66] = 1;

        inc += i%2 + 1;
    }

    //Third Roof (76 - 91)
    inc = 0;
    for (i = 0; i < 8; i++) {

        globalPoints[0][i+76] = inc;
        globalPoints[1][i+76] = 11;
        globalPoints[2][i+76] = 1;

        globalPoints[0][i+84] = inc;
        globalPoints[1][i+84] = 12;
        globalPoints[2][i+84] = 1;

        inc += 2 - i%2;
    }

    //Fourth Roof (92 - 105)
    inc = 0;
    for (i = 0; i < 7; i++) {

        globalPoints[0][i+92] = inc;
        globalPoints[1][i+92] = 12;
        globalPoints[2][i+92] = 1;

        globalPoints[0][i+99] = inc;
        globalPoints[1][i+99] = 13;
        globalPoints[2][i+99] = 1;

        inc += i%2 + 1;
    }

    //Fifth Roof (106 - 115)
    inc = 0;
    for (i = 0; i < 5; i++) {

        globalPoints[0][i+106] = inc;
        globalPoints[1][i+106] = 13;
        globalPoints[2][i+106] = 1;

        globalPoints[0][i+111] = inc;
        globalPoints[1][i+111] = 14;
        globalPoints[2][i+111] = 1;

        inc += 2 - i%2;
    }
}

void Cottage::createWall() {
    GLdouble (*p)[3][POINTS] = &renderMatrix;
    GLfloat colors [3] = {0.612, 0.365, 0.306};

    GLint width = 3;
    int x1, x2, y1, y2;

    //Horizontal
    x1 = (*p)[0][0]; y1 = (*p)[1][0];
    x2 = (*p)[0][5]; y2 = (*p)[1][5];
    linea.draw(x1, y1, x2, y2, colors, width);

    x1 = (*p)[0][6]; y1 = (*p)[1][6];
    x2 = (*p)[0][11]; y2 = (*p)[1][11];
    linea.draw(x1, y1, x2, y2, colors, width);

    //Vertical
    x1 = (*p)[0][0]; y1 = (*p)[1][0];
    x2 = (*p)[0][6]; y2 = (*p)[1][6];
    linea.draw(x1, y1, x2, y2, colors, width);

    x1 = (*p)[0][1]; y1 = (*p)[1][1];
    x2 = (*p)[0][7]; y2 = (*p)[1][7];
    linea.draw(x1, y1, x2, y2, colors, width);

    x1 = (*p)[0][1]; y1 = (*p)[1][2];
    x2 = (*p)[0][8]; y2 = (*p)[1][8];
    linea.draw(x1, y1, x2, y2, colors, width);

    x1 = (*p)[0][3]; y1 = (*p)[1][3];
    x2 = (*p)[0][9]; y2 = (*p)[1][9];
    linea.draw(x1, y1, x2, y2, colors, width);

    x1 = (*p)[0][4]; y1 = (*p)[1][4];
    x2 = (*p)[0][10]; y2 = (*p)[1][10];
    linea.draw(x1, y1, x2, y2, colors, width);

    x1 = (*p)[0][5]; y1 = (*p)[1][5];
    x2 = (*p)[0][11]; y2 = (*p)[1][11];
    linea.draw(x1, y1, x2, y2, colors, width);
}

void Cottage::createWindow() {
    GLdouble (*p)[3][POINTS] = &renderMatrix;

    GLfloat colors[3] = {0.941, 0.808, 0.620};
    GLfloat width = 3;
    int x1, y1, x2, y2;

    //Middle
    x1 = (*p)[0][16]; y1 = (*p)[1][16];
    x2 = (*p)[0][17]; y2 = (*p)[1][17];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][18]; y1 = (*p)[1][18];
    x2 = (*p)[0][19]; y2 = (*p)[1][19];
    linea.draw(x1,y1,x2,y2, colors, width);

    colors[0] = 0.267;
    colors[1] = 0.184;
    colors[2] = 0.255;

    //Outline
    x1 = (*p)[0][12]; y1 = (*p)[1][12];
    x2 = (*p)[0][13]; y2 = (*p)[1][13];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][14]; y1 = (*p)[1][14];
    x2 = (*p)[0][15]; y2 = (*p)[1][15];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][12]; y1 = (*p)[1][12];
    x2 = (*p)[0][14]; y2 = (*p)[1][14];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][13]; y1 = (*p)[1][13];
    x2 = (*p)[0][15]; y2 = (*p)[1][15];
    linea.draw(x1,y1,x2,y2, colors, width);
}

void Cottage::createStairs() {
    GLdouble (*p)[3][POINTS]= &renderMatrix;

    GLfloat colors[3] = {0.345, 0.220, 0.263};
    GLfloat width = 3;
    int x1, y1, x2, y2;

    //First Level
    x1 = (*p)[0][22]; y1 = (*p)[1][22];
    x2 = (*p)[0][28]; y2 = (*p)[1][28];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][23]; y1 = (*p)[1][23];
    x2 = (*p)[0][29]; y2 = (*p)[1][29];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][25]; y1 = (*p)[1][25];
    x2 = (*p)[0][26]; y2 = (*p)[1][26];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][28]; y1 = (*p)[1][28];
    x2 = (*p)[0][29]; y2 = (*p)[1][29];
    linea.draw(x1,y1,x2,y2, colors, width);

    //Second Level
    x1 = (*p)[0][24]; y1 = (*p)[1][24];
    x2 = (*p)[0][27]; y2 = (*p)[1][27];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][26]; y1 = (*p)[1][26];
    x2 = (*p)[0][27]; y2 = (*p)[1][27];
    linea.draw(x1,y1,x2,y2, colors, width);
}

void Cottage::createStick() {
    GLdouble (*p)[3][POINTS] = &renderMatrix;
    GLfloat colors[3] = {0.941, 0.808, 0.620};

    GLfloat width = 3;
    int x1, y1, x2, y2;

    //Middle
    x1 = (*p)[0][30]; y1 = (*p)[1][30];
    x2 = (*p)[0][31]; y2 = (*p)[1][31];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][30]; y1 = (*p)[1][30];
    x2 = (*p)[0][32]; y2 = (*p)[1][32];
    linea.draw(x1,y1,x2,y2, colors, width);

    x1 = (*p)[0][32]; y1 = (*p)[1][32];
    x2 = (*p)[0][33]; y2 = (*p)[1][33];
    linea.draw(x1,y1,x2,y2, colors, width);
}

void Cottage::createRoof() {
    GLdouble (*p)[3][POINTS] = &renderMatrix;
    GLfloat colors[3] = {0.271, 0.176, 0.231};

    GLfloat width = 3;
    int x1, y1, x2, y2, i;

    //First Level
        //Horizontal
        x1 = (*p)[0][34]; y1 = (*p)[1][34];
        x2 = (*p)[0][44]; y2 = (*p)[1][44];
        linea.draw(x1,y1,x2,y2, colors, width);

        x1 = (*p)[0][45]; y1 = (*p)[1][45];
        x2 = (*p)[0][55]; y2 = (*p)[1][55];
        linea.draw(x1,y1,x2,y2, colors, width);

        //Vertical
        for (i = 0; i < 11; i++) {
            x1 = (*p)[0][34 + i]; y1 = (*p)[1][34 + i];
            x2 = (*p)[0][45 + i]; y2 = (*p)[1][45 + i];
            linea.draw(x1,y1,x2,y2, colors, width);
        }

    //Second Level
        //Horizontal
        x1 = (*p)[0][56]; y1 = (*p)[1][56];
        x2 = (*p)[0][65]; y2 = (*p)[1][65];
        linea.draw(x1,y1,x2,y2, colors, width);

        x1 = (*p)[0][66]; y1 = (*p)[1][66];
        x2 = (*p)[0][75]; y2 = (*p)[1][75];
        linea.draw(x1,y1,x2,y2, colors, width);

        //Vertical
        for (i = 0; i < 10; i++) {
            x1 = (*p)[0][56 + i]; y1 = (*p)[1][56 + i];
            x2 = (*p)[0][66 + i]; y2 = (*p)[1][66 + i];
            linea.draw(x1,y1,x2,y2, colors, width);
        }

    //Third Level
        //Horizontal
        x1 = (*p)[0][76]; y1 = (*p)[1][76];
        x2 = (*p)[0][83]; y2 = (*p)[1][83];
        linea.draw(x1,y1,x2,y2, colors, width);

        x1 = (*p)[0][84]; y1 = (*p)[1][84];
        x2 = (*p)[0][91]; y2 = (*p)[1][91];
        linea.draw(x1,y1,x2,y2, colors, width);

        //Vertical
        for (i = 0; i < 8; i++) {
            x1 = (*p)[0][76 + i]; y1 = (*p)[1][76 + i];
            x2 = (*p)[0][84 + i]; y2 = (*p)[1][84 + i];
            linea.draw(x1,y1,x2,y2, colors, width);
        }

    //Fouth Level
        //Horizontal
        x1 = (*p)[0][92]; y1 = (*p)[1][92];
        x2 = (*p)[0][98]; y2 = (*p)[1][98];
        linea.draw(x1,y1,x2,y2, colors, width);

        x1 = (*p)[0][99]; y1 = (*p)[1][99];
        x2 = (*p)[0][105]; y2 = (*p)[1][105];
        linea.draw(x1,y1,x2,y2, colors, width);

        //Vertical
        for (i = 0; i < 7; i++) {
            x1 = (*p)[0][92 + i]; y1 = (*p)[1][92 + i];
            x2 = (*p)[0][99 + i]; y2 = (*p)[1][99 + i];
            linea.draw(x1,y1,x2,y2, colors, width);
        }

    //Fifth Level
        //Horizontal
        x1 = (*p)[0][106]; y1 = (*p)[1][106];
        x2 = (*p)[0][110]; y2 = (*p)[1][110];
        linea.draw(x1,y1,x2,y2, colors, width);

        x1 = (*p)[0][111]; y1 = (*p)[1][111];
        x2 = (*p)[0][115]; y2 = (*p)[1][115];
        linea.draw(x1,y1,x2,y2, colors, width);

        //Vertical
        for (i = 0; i < 5; i++) {
            x1 = (*p)[0][106 + i]; y1 = (*p)[1][106 + i];
            x2 = (*p)[0][111 + i]; y2 = (*p)[1][111 + i];
            linea.draw(x1,y1,x2,y2, colors, width);
        }
}

void Cottage::draw() {
    //Load points in renderMatrix
    matrix.multiplication(opMatrix, *globalPoints, *renderMatrix, POINTS);

    createWall();
    createWindow();
    createStairs();
    createStick();
    createRoof();
}

void Cottage::setDefaulScale(GLdouble x, GLdouble y){
    defaultScale[0] = x;
    defaultScale[1] = y;

    matrix.scaling(x,y,opMatrix);
}

void Cottage::setDefaultTranslation(GLdouble x, GLdouble y){
    defaultTranslation[0] = x;
    defaultTranslation[1] = y;

    matrix.translation(-40,-15,opMatrix);
}

void Cottage::setDefaultRotation(GLdouble x, GLdouble y){
    defaultRotation[0] = x;
    defaultRotation[1] = y;
}

Cottage::Cottage()
{
    loadGlobalPoints();
}
