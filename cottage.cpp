
#include <GL/glut.h>
#include <iostream>
<<<<<<< Updated upstream
=======
#include "matrix.cpp"
#include "linea.cpp"
>>>>>>> Stashed changes

#define POINTS 128

class Cottage {

private:
<<<<<<< Updated upstream
    GLdouble globalPoints [POINTS][2];
    GLdouble oppMatrix [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
=======
    Linea linea;
    GLdouble globalPoints [3][POINTS];
    GLdouble renderMatrix [3][POINTS];

    //Init like this
    GLdouble opMatrix [3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    MatrixOP matrix;
>>>>>>> Stashed changes

    void loadGlobalPoints()
    {
        int i;

        //Wall Left-Right Points
        for (i = 0; i < 5; i++) {
            globalPoints[i][0] = 0;
            globalPoints[i][1] = 2*i;
            //globalPoints[i][2] = 1;

            globalPoints[i+6][0] = 11;
            globalPoints[i+6][1] = 2*i;
            //globalPoints[i+6][2] = 1;
        }

        globalPoints[5][0] = 0;
        globalPoints[5][1] = 9;
        //globalPoints[5][2] = 1;

        globalPoints[11][0] = 11;
        globalPoints[11][1] = 9;
        //globalPoints[11][2] = 1;

        //Window Left-Right Points
        for (i = 0; i < 2; i++) {
            globalPoints[i+12][0] = 5;
            globalPoints[i+12][1] = 4*i+4;
            //globalPoints[i+12][2] = 1;

            globalPoints[i+14][0] = 8;
            globalPoints[i+14][1] = 4*i+4;
            //globalPoints[i+14][2] = 1;
        }

        //Window Middle Points
        globalPoints[16][0] = 7;
        globalPoints[16][1] = 4;
        //globalPoints[16][2] = 1;

        globalPoints[17][0] = 7;
        globalPoints[17][1] = 8;
        //globalPoints[17][2] = 1;

        globalPoints[18][0] = 5;
        globalPoints[18][1] = 6;
        //globalPoints[18][2] = 1;

        globalPoints[19][0] = 8;
        globalPoints[19][1] = 6;
        //globalPoints[19][2] = 1;

        //Stairs Points
        for (i = 0; i < 3; i++) {
            globalPoints[i+22][0] = 11;
            globalPoints[i+22][1] = i;
            //globalPoints[i+22][2] = 1;

            globalPoints[i+25][0] = 12;
            globalPoints[i+25][1] = i;
            //globalPoints[i+25][2] = 1;
        }

        globalPoints[28][0] = 13;
        globalPoints[28][1] = 0;
        //globalPoints[28][2] = 1;

        globalPoints[29][0] = 13;
        globalPoints[29][1] = 1;
        //globalPoints[29][2] = 1;

        //Stick Point
        for (i = 0; i < 2; i++) {
            globalPoints[i+30][0] = 14.5;
            globalPoints[i+30][1] = i*9;
            //globalPoints[i+30][2] = 1;

            globalPoints[i+32][0] = 15;
            globalPoints[i+32][1] = i*9;
            //globalPoints[i+32][2] = 1;
        }

        //First Roof (34 - 55)
        int inc = 0;
        for (i = 0; i < 11; i++) {

<<<<<<< Updated upstream
            globalPoints[i+34][0] = cum;
            globalPoints[i+34][1] = 9;
            //globalPoints[i+34][2] = 1;

            globalPoints[i+45][0] = cum;
            globalPoints[i+45][1] = 10;
            //globalPoints[i+45][2] = 1;
=======
            globalPoints[0][i+34] = inc;
            globalPoints[1][i+34] = 9;
            globalPoints[2][i+34] = 1;

            globalPoints[0][i+45] = inc;
            globalPoints[1][i+45] = 10;
            globalPoints[2][i+45] = 1;
>>>>>>> Stashed changes

            inc += 2 - i%2;
        }

        //Second Roof (56 - 75)
        inc = 0;
        for (i = 0; i < 10; i++) {

<<<<<<< Updated upstream
            globalPoints[i+56][0] = cum;
            globalPoints[i+56][1] = 10;
            //globalPoints[i+56][2] = 1;

            globalPoints[i+66][0] = cum;
            globalPoints[i+66][1] = 11;
            //globalPoints[i+66][2] = 1;
=======
            globalPoints[0][i+56] = inc;
            globalPoints[1][i+56] = 10;
            globalPoints[2][i+56] = 1;

            globalPoints[0][i+66] = inc;
            globalPoints[1][i+66] = 11;
            globalPoints[2][i+66] = 1;
>>>>>>> Stashed changes

            inc += i%2 + 1;
        }

        //Third Roof (76 - 91)
        inc = 0;
        for (i = 0; i < 8; i++) {

<<<<<<< Updated upstream
            globalPoints[i+76][0] = cum;
            globalPoints[i+76][1] = 11;
            //globalPoints[i+76][2] = 1;

            globalPoints[i+84][0] = cum;
            globalPoints[i+84][1] = 12;
            //globalPoints[i+84][2] = 1;
=======
            globalPoints[0][i+76] = inc;
            globalPoints[1][i+76] = 11;
            globalPoints[2][i+76] = 1;

            globalPoints[0][i+84] = inc;
            globalPoints[1][i+84] = 12;
            globalPoints[2][i+84] = 1;
>>>>>>> Stashed changes

            inc += 2 - i%2;
        }

        //Fourth Roof (92 - 105)
        inc = 0;
        for (i = 0; i < 7; i++) {

<<<<<<< Updated upstream
            globalPoints[i+92][0] = cum;
            globalPoints[i+92][1] = 12;
            //globalPoints[i+92][2] = 1;

            globalPoints[i+99][0] = cum;
            globalPoints[i+99][1] = 13;
            //globalPoints[i+99][2] = 1;
=======
            globalPoints[0][i+92] = inc;
            globalPoints[1][i+92] = 12;
            globalPoints[2][i+92] = 1;

            globalPoints[0][i+99] = inc;
            globalPoints[1][i+99] = 13;
            globalPoints[2][i+99] = 1;
>>>>>>> Stashed changes

            inc += i%2 + 1;
        }

        //Fifth Roof (106 - 115)
        inc = 0;
        for (i = 0; i < 5; i++) {

<<<<<<< Updated upstream
            globalPoints[i+106][0] = cum;
            globalPoints[i+106][1] = 13;
            //globalPoints[i+106][2] = 1;

            globalPoints[i+111][0] = cum;
            globalPoints[i+111][1] = 14;
            //globalPoints[i+111][2] = 1;
=======
            globalPoints[0][i+106] = inc;
            globalPoints[1][i+106] = 13;
            globalPoints[2][i+106] = 1;

            globalPoints[0][i+111] = inc;
            globalPoints[1][i+111] = 14;
            globalPoints[2][i+111] = 1;
>>>>>>> Stashed changes

            inc += 2 - i%2;
        }
    }

    void createWall()
    {
        GLdouble (*p)[POINTS][2] = &globalPoints;

        glColor3f(0.612, 0.365, 0.306);
        glLineWidth(3);

        //Horizontal
        glBegin(GL_LINES);
            glVertex2d((*p)[0][0],(*p)[0][1]);
            glVertex2d((*p)[5][0],(*p)[5][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[6][0],(*p)[6][1]);
            glVertex2d((*p)[11][0],(*p)[11][1]);
        glEnd();

        //Vertical
        glBegin(GL_LINES);
            glVertex2d((*p)[0][0],(*p)[0][1]);
            glVertex2d((*p)[6][0],(*p)[6][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[1][0],(*p)[1][1]);
            glVertex2d((*p)[7][0],(*p)[7][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[1][0],(*p)[2][1]);
            glVertex2d((*p)[8][0],(*p)[8][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[3][0],(*p)[3][1]);
            glVertex2d((*p)[9][0],(*p)[9][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[4][0],(*p)[4][1]);
            glVertex2d((*p)[10][0],(*p)[10][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[5][0],(*p)[5][1]);
            glVertex2d((*p)[11][0],(*p)[11][1]);
        glEnd();
    }

    void createWindow()
    {
        GLdouble (*p)[POINTS][2] = &globalPoints;

        GLfloat red = 0.941, green = 0.808, blue = 0.808, width = 3;
        int x1, y1, x2, y2;
        //glColor3f(0.941, 0.808, 0.620);
        //glLineWidth(3);

        //Middle
<<<<<<< Updated upstream
        glBegin(GL_LINES);
            glVertex2d((*p)[16][0],(*p)[16][1]);
            glVertex2d((*p)[17][0],(*p)[17][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[18][0],(*p)[18][1]);
            glVertex2d((*p)[19][0],(*p)[19][1]);
        glEnd();
=======
            x1 = (*p)[0][16];
            y1 = (*p)[1][16];
            x2 = (*p)[0][17];
            y2 = (*p)[1][17];
            linea.draw(x1,y1,x2,y2, red, green, blue, width);

            x1 = (*p)[0][18];
            y1 = (*p)[1][18];
            x2 = (*p)[0][19];
            y2 = (*p)[1][19];
            linea.draw(x1,y1,x2,y2, red, green, blue, width);
>>>>>>> Stashed changes

        glColor3f(0.267, 0.184, 0.255);

        //Outline
        glBegin(GL_LINES);
            glVertex2d((*p)[12][0],(*p)[12][1]);
            glVertex2d((*p)[13][0],(*p)[13][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[14][0],(*p)[14][1]);
            glVertex2d((*p)[15][0],(*p)[15][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[12][0],(*p)[12][1]);
            glVertex2d((*p)[14][0],(*p)[14][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[13][0],(*p)[13][1]);
            glVertex2d((*p)[15][0],(*p)[15][1]);
        glEnd();
    }

    void createStairs()
    {
        GLdouble (*p)[POINTS][2] = &globalPoints;

        glColor3f(0.345, 0.220, 0.263);
        glLineWidth(3);

        //First Level
        glBegin(GL_LINES);
            glVertex2d((*p)[22][0],(*p)[22][1]);
            glVertex2d((*p)[28][0],(*p)[28][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[23][0],(*p)[23][1]);
            glVertex2d((*p)[29][0],(*p)[29][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[25][0],(*p)[25][1]);
            glVertex2d((*p)[26][0],(*p)[26][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[28][0],(*p)[28][1]);
            glVertex2d((*p)[29][0],(*p)[29][1]);
        glEnd();

        //Second Level
        glBegin(GL_LINES);
            glVertex2d((*p)[24][0],(*p)[24][1]);
            glVertex2d((*p)[27][0],(*p)[27][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[26][0],(*p)[26][1]);
            glVertex2d((*p)[27][0],(*p)[27][1]);
        glEnd();
    }

    void createStick()
    {
        GLdouble (*p)[POINTS][2] = &globalPoints;

        glColor3f(0.941, 0.808, 0.620);
        glLineWidth(3);

        //Middle
        glBegin(GL_LINES);
            glVertex2d((*p)[30][0],(*p)[30][1]);
            glVertex2d((*p)[31][0],(*p)[31][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[30][0],(*p)[30][1]);
            glVertex2d((*p)[32][0],(*p)[32][1]);
        glEnd();
        glBegin(GL_LINES);
            glVertex2d((*p)[32][0],(*p)[32][1]);
            glVertex2d((*p)[33][0],(*p)[33][1]);
        glEnd();
    }

    void createRoof()
    {
        GLdouble (*p)[POINTS][2] = &globalPoints;
        int i;

        glColor3f(0.271, 0.176, 0.231);
        glLineWidth(3);

        //First Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[34][0],(*p)[34][1]);
                glVertex2d((*p)[44][0],(*p)[44][1]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[45][0],(*p)[45][1]);
                glVertex2d((*p)[55][0],(*p)[55][1]);
            glEnd();

            //Vertical
            for (i = 0; i < 11; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[34 + i][0],(*p)[34 + i][1]);
                    glVertex2d((*p)[45 + i][0],(*p)[45 + i][1]);
                glEnd();
            }

        //Second Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[56][0],(*p)[56][1]);
                glVertex2d((*p)[65][0],(*p)[65][1]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[66][0],(*p)[66][1]);
                glVertex2d((*p)[75][0],(*p)[75][1]);
            glEnd();

            //Vertical
            for (i = 0; i < 10; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[56 + i][0],(*p)[56 + i][1]);
                    glVertex2d((*p)[66 + i][0],(*p)[66 + i][1]);
                glEnd();
            }

        //Third Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[76][0],(*p)[76][1]);
                glVertex2d((*p)[83][0],(*p)[83][1]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[84][0],(*p)[84][1]);
                glVertex2d((*p)[91][0],(*p)[91][1]);
            glEnd();

            //Vertical
            for (i = 0; i < 8; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[76 + i][0],(*p)[76 + i][1]);
                    glVertex2d((*p)[84 + i][0],(*p)[84 + i][1]);
                glEnd();
            }

        //Fouth Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[92][0],(*p)[92][1]);
                glVertex2d((*p)[98][0],(*p)[98][1]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[99][0],(*p)[99][1]);
                glVertex2d((*p)[105][0],(*p)[105][1]);
            glEnd();

            //Vertical
            for (i = 0; i < 7; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[92 + i][0],(*p)[92 + i][1]);
                    glVertex2d((*p)[99 + i][0],(*p)[99 + i][1]);
                glEnd();
            }

        //Fifth Level
            //Horizontal
            glBegin(GL_LINES);
                glVertex2d((*p)[106][0],(*p)[106][1]);
                glVertex2d((*p)[110][0],(*p)[110][1]);
            glEnd();
            glBegin(GL_LINES);
                glVertex2d((*p)[111][0],(*p)[111][1]);
                glVertex2d((*p)[115][0],(*p)[115][1]);
            glEnd();

            //Vertical
            for (i = 0; i < 5; i++) {
                glBegin(GL_LINES);
                    glVertex2d((*p)[106 + i][0],(*p)[106 + i][1]);
                    glVertex2d((*p)[111 + i][0],(*p)[111 + i][1]);
                glEnd();
            }
    }

public:
    void draw()
    {
        createWall();
        createWindow();
        createStairs();
        createStick();
        createRoof();
    }

    Cottage()
    {
        loadGlobalPoints();
    }
};
