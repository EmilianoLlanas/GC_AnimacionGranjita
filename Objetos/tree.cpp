#include <GL/glut.h>

#include "../Herramientas/matrix.h"
#include "linea.h"
#include "tree.h"
#include <cstdio>
    void Tree::loadGlobalPoints()
    {
        int i;


        //Tronco
        globalPoints[0][0] = 0;
        globalPoints[1][0] = 0;
        globalPoints[2][0] = 1;

        globalPoints[0][1] = 0;
        globalPoints[1][1] = -10;
        globalPoints[2][1] = 1;

        globalPoints[0][2] = 3;
        globalPoints[1][2] = -10;
        globalPoints[2][2] = 1;

        globalPoints[0][3] = 3;
        globalPoints[1][3] = 0;
        globalPoints[2][3] = 1;

        globalPoints[0][4] = 5;
        globalPoints[1][4] = 0;
        globalPoints[2][4] = 1;

        globalPoints[0][5] = 5;
        globalPoints[1][5] = 1;
        globalPoints[2][5] = 1;

        globalPoints[0][6] = 6;
        globalPoints[1][6] = 1;
        globalPoints[2][6] = 1;

        globalPoints[0][7] = 6;
        globalPoints[1][7] = 2;
        globalPoints[2][7] = 1;

        globalPoints[0][8] = 7;
        globalPoints[1][8] = 2;
        globalPoints[2][8] = 1;

        globalPoints[0][9] = 7;
        globalPoints[1][9] = 3;
        globalPoints[2][9] = 1;

        globalPoints[0][10] = 8;
        globalPoints[1][10] = 3;
        globalPoints[2][10] = 1;

        globalPoints[0][11] = 8;
        globalPoints[1][11] = 9;
        globalPoints[2][11] = 1;

        globalPoints[0][12] = 7;
        globalPoints[1][12] = 9;
        globalPoints[2][12] = 1;

        globalPoints[0][13] = 7;
        globalPoints[1][13] = 10;
        globalPoints[2][13] = 1;

        globalPoints[0][14] = 6;
        globalPoints[1][14] = 10;
        globalPoints[2][14] = 1;

        globalPoints[0][15] = 6;
        globalPoints[1][15] = 11;
        globalPoints[2][15] = 1;

        globalPoints[0][16] = 5;
        globalPoints[1][16] = 11;
        globalPoints[2][16] = 1;

        globalPoints[0][17] = 5;
        globalPoints[1][17] = 12;
        globalPoints[2][17] = 1;

        globalPoints[0][18] = -2;
        globalPoints[1][18] = 12;
        globalPoints[2][18] = 1;

        globalPoints[0][19] = -2;
        globalPoints[1][19] = 11;
        globalPoints[2][19] = 1;

        globalPoints[0][20] = -3;
        globalPoints[1][20] = 11;
        globalPoints[2][20] = 1;

        globalPoints[0][21] = -3;
        globalPoints[1][21] = 10;
        globalPoints[2][21] = 1;

        globalPoints[0][22] = -4;
        globalPoints[1][22] = 10;
        globalPoints[2][22] = 1;

        globalPoints[0][23] = -4;
        globalPoints[1][23] = 9;
        globalPoints[2][23] = 1;

        globalPoints[0][24] = -5;
        globalPoints[1][24] = 9;
        globalPoints[2][24] = 1;

        globalPoints[0][25] = -5;
        globalPoints[1][25] = 3;
        globalPoints[2][25] = 1;

        globalPoints[0][26] = -4;
        globalPoints[1][26] = 3;
        globalPoints[2][26] = 1;

        globalPoints[0][27] = -4;
        globalPoints[1][27] = 2;
        globalPoints[2][27] = 1;

        globalPoints[0][28] = -3;
        globalPoints[1][28] = 2;
        globalPoints[2][28] = 1;

        globalPoints[0][29] = -3;
        globalPoints[1][29] = 1;
        globalPoints[2][29] = 1;

        globalPoints[0][30] = -2;
        globalPoints[1][30] = 1;
        globalPoints[2][30] = 1;

        globalPoints[0][31] = -2;
        globalPoints[1][31] = 0;
        globalPoints[2][31] = 1;

        globalPoints[0][32] = 0;
        globalPoints[1][32] = 0;
        globalPoints[2][32] = 1;

        globalPoints[0][33] = 40;
        globalPoints[1][33] = -10;
        globalPoints[2][33] = 1;

        globalPoints[0][34] = 46;
        globalPoints[1][34] = -10;
        globalPoints[2][34] = 1;

        globalPoints[0][35] = 46;
        globalPoints[1][35] = -7;
        globalPoints[2][35] = 1;

        globalPoints[0][36] = 45;
        globalPoints[1][36] = -9;
        globalPoints[2][36] = 1;

        globalPoints[0][37] = 44;
        globalPoints[1][37] = -7;
        globalPoints[2][37] = 1;

        globalPoints[0][38] = 43;
        globalPoints[1][38] = -9;
        globalPoints[2][38] = 1;

        globalPoints[0][39] = 42;
        globalPoints[1][39] = -6;
        globalPoints[2][39] = 1;

        globalPoints[0][40] = 42;
        globalPoints[1][40] = -9;
        globalPoints[2][40] = 1;

        globalPoints[0][41] = 40;
        globalPoints[1][41] = -6;
        globalPoints[2][41] = 1;

        globalPoints[0][42] = 41;
        globalPoints[1][42] = -9;
        globalPoints[2][42] = 1;

        globalPoints[0][43] = 39;
        globalPoints[1][43] = -6;
        globalPoints[2][43] = 1;

        globalPoints[0][44] = 40;
        globalPoints[1][44] = -10;
        globalPoints[2][44] = 1;
    }


    void Tree::createTree()

    {
        GLdouble (*p)[3][POINTS] = &renderMatrix;
        GLfloat colors [3] = {0.6, 0.4, 0};
        GLint width = 3;
        int x1, x2, y1, y2;
        int i;

        //tronco
        for(i=0;i<3;i++){

            x1 = (*p)[0][i]; y1 = (*p)[1][i];
            x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
            linea.draw(x1, y1, x2, y2, colors, width);

        }
        //hojas
        colors[0]=.20;
        colors[1]=.80;
        colors[2]=.20;

        for(i=3;i<32;i++){

            x1 = (*p)[0][i]; y1 = (*p)[1][i];
            x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
            linea.draw(x1, y1, x2, y2, colors, width);

        }
    }

    void Tree::createGrass(){
        GLdouble (*p)[3][POINTS] = &renderMatrix;
        GLfloat colors [3] = {0.2, 0.8, 0.2};
        GLint width = 3;
        int x1, x2, y1, y2;
        int i;

        //pasto
        for(i=33;i<44;i++){

            x1 = (*p)[0][i]; y1 = (*p)[1][i];
            x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
            linea.draw(x1, y1, x2, y2, colors, width);

        }


    }
    void Tree:: draw()
    {
        matrix.multiplication(opMatrix,*globalPoints,*renderMatrix,POINTS);

        createTree();
        if(defaultTranslation[0]==-20){
             createGrass();
        }

    }


    void Tree::update(){
        draw();
    }
    void Tree::setDefaulScale(GLdouble x, GLdouble y){
        defaultScale[0] = x;
        defaultScale[1] = y;

        matrix.scaling(x,y,opMatrix);
    }

    void Tree::setDefaultTranslation(GLdouble x, GLdouble y){
        defaultTranslation[0] = x;
        defaultTranslation[1] = y;

        matrix.translation(x,y,opMatrix);
    }

    void Tree::setDefaultRotation(GLdouble x, GLdouble y){
        defaultRotation[0] = x;
        defaultRotation[1] = y;
    }


    Tree::Tree()
    {
        loadGlobalPoints();
    }
