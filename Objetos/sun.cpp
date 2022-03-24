#include "sun.h"

 void Sun::loadGlobalPoints() {
    //punto central
    globalPoints[0][0] = 0;
    globalPoints[1][0] = 0;
    globalPoints[2][0] = 1;

    //Rayos de sol
    GLfloat rayo; //Tama�o del rayo

    GLfloat xcentro = 0, ycentro = 0;

    //rayo en angulo 0

    /*globalPoints[0][25] = 1;
    globalPoints[1][25] = 0;
    globalPoints[2][25] = 1;*/

    GLfloat x1, y1;



    GLfloat change[6][8];

    //0 grad0s
    rayo = radio * 20;
    change[0][0] = 10;
    change[1][0] = -rayo;
    change[2][0] = 10;
    change[3][0] = rayo;
    change[4][0] = 10+rayo*2;
    change[5][0] = 0;

    //45 grados
    rayo = radio * 10;
    change[0][1] = 10+rayo;
    change[1][1] = 10-rayo;
    change[2][1] = 10-rayo;
    change[3][1] = 10+rayo;
    change[4][1] = 10+rayo*2;
    change[5][1] = 10+rayo*2;

    //90 grados
    rayo = radio * 20;
    change[0][2] = -rayo;
    change[1][2] = 10;
    change[2][2] = rayo;
    change[3][2] = 10;
    change[4][2] = 0;
    change[5][2] = 1+rayo*2;

    //135 grados
    rayo = radio * 10;
    change[0][3] = -10-rayo;
    change[1][3] = 10-rayo;
    change[2][3] = -10+rayo;
    change[3][3] = 10+rayo;
    change[4][3] = -10-rayo*2;
    change[5][3] = 10+rayo*2;

    //180 grados
    rayo = radio * 20;
    change[0][4] = -10;
    change[1][4] = -rayo;
    change[2][4] = -10;
    change[3][4] = rayo;
    change[4][4] = -10-rayo*2;
    change[5][4] = 0;

    //225 grados
    rayo = radio * 10;
    change[0][5] = -10+rayo;
    change[1][5] = -10-rayo;
    change[2][5] = -10-rayo;
    change[3][5] = -10+rayo;
    change[4][5] = -10-rayo*2;
    change[5][5] = -10-rayo*2;

    //270 grados
    rayo = radio * 20;
    change[0][6] = -rayo;
    change[1][6] = -10;
    change[2][6] = rayo;
    change[3][6] = -10;
    change[4][6] = 0;
    change[5][6] = -10-rayo*2;


    //315 grados
    rayo = radio * 10;
    change[0][7] = 10-rayo;
    change[1][7] = -10-rayo;
    change[2][7] = 10+rayo;
    change[3][7] = -10+rayo;
    change[4][7] = 10+rayo*2;
    change[5][7] = -10-rayo*2;

    int pcount = 1, tcount = 0;

    for(int i=0; i<360; i+=45){
        //printf("%d ", pcount);
        x1 = xcentro + radio * (cos(i * (PI/180)) * (180/PI));
        y1 = ycentro + radio * (sin(i * (PI/180)) * (180/PI));

            //printf("x1 %f \n", x1 + change[0][tcount]);
            globalPoints[0][pcount] = x1 + change[0][tcount];
            globalPoints[1][pcount] = y1 + change[1][tcount];
            globalPoints[2][pcount] = 1;

            globalPoints[0][pcount+1] = x1 + change[2][tcount];
            globalPoints[1][pcount+1] = y1 + change[3][tcount];
            globalPoints[2][pcount+1] = 1;

            globalPoints[0][pcount+2] = x1 + change[4][tcount];
            globalPoints[1][pcount+2] = y1 + change[5][tcount];
            globalPoints[2][pcount+2] = 1;

        pcount+=3;
        tcount++;
    }
}

void Sun::createSun() {

    GLdouble (*p)[3][POINTS] = &renderMatrix;

    GLfloat colors[3] = {2.55,0.5,0};
    GLfloat width = 3;
    GLfloat coord[3];

    //Circulo
    coord[0] = radio;
    coord[1] = (*p)[0][0];
    coord[2] = (*p)[1][0];

    //printf("radio %f \n", (*p)[0][25]);

    circulo.draw(coord,colors, width);

    //Rayos
    for(int i = 1; i<POINTS; i+=3){
       // printf("x1 %f y1 %f %f \n", (*p)[0][i], (*p)[1][i], (*p)[2][i]);
        GLfloat triangle[2][3];
        triangle[0][0] = (*p)[0][i];
        triangle[1][0] = (*p)[1][i];

        triangle[0][1] = (*p)[0][i+1];
        triangle[1][1] = (*p)[1][i+1];

        triangle[0][2] = (*p)[0][i+2];
        triangle[1][2] = (*p)[1][i+2];

        triangulo.draw(triangle, colors, width);
    }
}

void Sun::scaling(GLfloat scale){
    radio = scale;
    matrix.scaling(scale,scale,opMatrix);
}

void Sun::draw()
{
    //loadGlobalPoints();

    createSun();
}

Sun::Sun(){

    loadGlobalPoints();

    scaling(0.5);

    matrix.translation(0,0,opMatrix);
    //translation(2);

    //Load points in renderMatrix
    matrix.multiplication(opMatrix, *globalPoints, *renderMatrix, POINTS);
}
