#include <GL/glut.h>
#include <iostream>
#include "matrix.cpp"
#include "linea.cpp"

#define POINTS 128

class Vaca {

private:
    Linea linea;
    GLdouble globalPoints [3][POINTS];
    GLdouble renderMatrix [3][POINTS];

    //Init like this
    GLdouble opMatrix [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    MatrixOP matrix;

    void loadGlobalPoints()
    {
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


    void createTorso()

    {
        GLdouble (*p)[3][POINTS] = &renderMatrix;

        glColor3f(0.612, 0.365, 0.306);
        glLineWidth(3);

        //Horizontal
        glBegin(GL_LINES);
            glVertex2d((*p)[0][0],(*p)[1][0]);
            glVertex2d((*p)[0][5],(*p)[1][5]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][6],(*p)[1][6]);
            glVertex2d((*p)[0][11],(*p)[1][11]);
        glEnd();

        //Vertical
        glBegin(GL_LINES);
            glVertex2d((*p)[0][0],(*p)[1][0]);
            glVertex2d((*p)[0][6],(*p)[1][6]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][1],(*p)[1][1]);
            glVertex2d((*p)[0][7],(*p)[1][7]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][1],(*p)[1][2]);
            glVertex2d((*p)[0][8],(*p)[1][8]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][3],(*p)[1][3]);
            glVertex2d((*p)[0][9],(*p)[1][9]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][4],(*p)[1][4]);
            glVertex2d((*p)[0][10],(*p)[1][10]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][5],(*p)[1][5]);
            glVertex2d((*p)[0][11],(*p)[1][11]);
        glEnd();
    }

    void createWindow()
    {
        GLdouble (*p)[3][POINTS] = &renderMatrix;

        GLfloat colors[3] = {0.941,0.808,0.620};
        GLfloat width = 3;
        int x1, y1, x2, y2;

        //Middle
            x1 = (*p)[0][16];
            y1 = (*p)[1][16];
            x2 = (*p)[0][17];
            y2 = (*p)[1][17];
            linea.draw(x1,y1,x2,y2, colors, width);

            x1 = (*p)[0][18];
            y1 = (*p)[1][18];
            x2 = (*p)[0][19];
            y2 = (*p)[1][19];
            linea.draw(x1,y1,x2,y2, colors, width);

        glColor3f(0.267, 0.184, 0.255);

        //Outline
        glBegin(GL_LINES);
            glVertex2d((*p)[0][12],(*p)[1][12]);
            glVertex2d((*p)[0][13],(*p)[1][13]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][14],(*p)[1][14]);
            glVertex2d((*p)[0][15],(*p)[1][15]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][12],(*p)[1][12]);
            glVertex2d((*p)[0][14],(*p)[1][14]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][13],(*p)[1][13]);
            glVertex2d((*p)[0][15],(*p)[1][15]);
        glEnd();
    }

    void createStairs()
    {
        GLdouble (*p)[3][POINTS]= &renderMatrix;

        glColor3f(0.345, 0.220, 0.263);
        glLineWidth(3);

        //First Level
        glBegin(GL_LINES);
            glVertex2d((*p)[0][22],(*p)[1][22]);
            glVertex2d((*p)[0][28],(*p)[1][28]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][23],(*p)[1][23]);
            glVertex2d((*p)[0][29],(*p)[1][29]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][25],(*p)[1][25]);
            glVertex2d((*p)[0][26],(*p)[1][26]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][28],(*p)[1][28]);
            glVertex2d((*p)[0][29],(*p)[1][29]);
        glEnd();

        //Second Level
        glBegin(GL_LINES);
            glVertex2d((*p)[0][24],(*p)[1][24]);
            glVertex2d((*p)[0][27],(*p)[1][27]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][26],(*p)[1][26]);
            glVertex2d((*p)[0][27],(*p)[1][27]);
        glEnd();
    }

    void createStick()
    {
        GLdouble (*p)[3][POINTS] = &renderMatrix;

        glColor3f(0.941, 0.808, 0.620);
        glLineWidth(3);

        //Middle
        glBegin(GL_LINES);
            glVertex2d((*p)[0][30],(*p)[1][30]);
            glVertex2d((*p)[0][31],(*p)[1][31]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][30],(*p)[1][30]);
            glVertex2d((*p)[0][32],(*p)[1][32]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[0][32],(*p)[1][32]);
            glVertex2d((*p)[0][33],(*p)[1][33]);
        glEnd();
    }

    void createRoof()
    {
        GLdouble (*p)[3][POINTS] = &renderMatrix;
        int i;

        glColor3f(0.271, 0.176, 0.231);
        glLineWidth(3);

        //First Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[0][34],(*p)[1][34]);
                glVertex2d((*p)[0][44],(*p)[1][44]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[0][45],(*p)[1][45]);
                glVertex2d((*p)[0][55],(*p)[1][55]);
            glEnd();

            //Vertical
            for (i = 0; i < 11; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[0][34 + i],(*p)[1][34 + i]);
                    glVertex2d((*p)[0][45 + i],(*p)[1][45 + i]);
                glEnd();
            }

        //Second Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[0][56],(*p)[1][56]);
                glVertex2d((*p)[0][65],(*p)[1][65]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[0][66],(*p)[1][66]);
                glVertex2d((*p)[0][75],(*p)[1][75]);
            glEnd();

            //Vertical
            for (i = 0; i < 10; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[0][56 + i],(*p)[1][56 + i]);
                    glVertex2d((*p)[0][66 + i],(*p)[1][66 + i]);
                glEnd();
            }

        //Third Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[0][76],(*p)[1][76]);
                glVertex2d((*p)[0][83],(*p)[1][83]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[0][84],(*p)[1][84]);
                glVertex2d((*p)[0][91],(*p)[1][91]);
            glEnd();

            //Vertical
            for (i = 0; i < 8; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[0][76 + i],(*p)[1][76 + i]);
                    glVertex2d((*p)[0][84 + i],(*p)[1][84 + i]);
                glEnd();
            }

        //Fouth Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[0][92],(*p)[1][92]);
                glVertex2d((*p)[0][98],(*p)[1][98]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[0][99],(*p)[1][99]);
                glVertex2d((*p)[0][105],(*p)[1][105]);
            glEnd();

            //Vertical
            for (i = 0; i < 7; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[0][92 + i],(*p)[1][92 + i]);
                    glVertex2d((*p)[0][99 + i],(*p)[1][99 + i]);
                glEnd();
            }

        //Fifth Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[0][106],(*p)[1][106]);
                glVertex2d((*p)[0][110],(*p)[1][110]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[0][111],(*p)[1][111]);
                glVertex2d((*p)[0][115],(*p)[1][115]);
            glEnd();

            //Vertical
            for (i = 0; i < 5; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[0][106 + i],(*p)[1][106 + i]);
                    glVertex2d((*p)[0][111 + i],(*p)[1][111 + i]);
                glEnd();
            }
    }

public:
    void draw()
    {
       /* createWall();
        createWindow();
        createStairs();
        createStick();
        createRoof();*/
        createTorso();
    }

    Vaca()
    {
        loadGlobalPoints();

        //Define operation matrix
        matrix.scaling(15,15,opMatrix);
        matrix.translation(-40,-15,opMatrix);

        //Load points in renderMatrix
        matrix.multiplication(opMatrix, globalPoints, renderMatrix);
    }
};
