#include <GL/glut.h>

#include "../Herramientas/matrix.h"
#include "linea.h"
#include "vaca.h"

void Vaca::loadGlobalPoints()
{
    int i;

    //cuerpo
    globalPoints[0][0] = 0;
    globalPoints[1][0] = 0;
    globalPoints[2][0] = 1;

    globalPoints[0][1] = 2;
    globalPoints[1][1] = 0;
    globalPoints[2][1] = 1;

    globalPoints[0][2] = 2;
    globalPoints[1][2] = 3;
    globalPoints[2][2] = 1;

    globalPoints[0][3] = 4;
    globalPoints[1][3] = 3;
    globalPoints[2][3] = 1;

    globalPoints[0][4] = 4;
    globalPoints[1][4] = 3;
    globalPoints[2][4] = 1;

    globalPoints[0][5] = 4;
    globalPoints[1][5] = 0;
    globalPoints[2][5] = 1;

    globalPoints[0][6] = 6;
    globalPoints[1][6] = 0;
    globalPoints[2][6] = 1;

    globalPoints[0][7] = 6;
    globalPoints[1][7] = 3;
    globalPoints[2][7] = 1;

    globalPoints[0][8] = 10;
    globalPoints[1][8] = 3;
    globalPoints[2][8] = 1;

    globalPoints[0][9] = 10;
    globalPoints[1][9] = 0;
    globalPoints[2][9] = 1;

    globalPoints[0][10] = 12;
    globalPoints[1][10] = 0;
    globalPoints[2][10] = 1;

    globalPoints[0][11] = 12;
    globalPoints[1][11] = 3;
    globalPoints[2][11] = 1;

    globalPoints[0][12] = 14;
    globalPoints[1][12] = 3;
    globalPoints[2][12] = 1;

    globalPoints[0][13] = 14;
    globalPoints[1][13] = 0;
    globalPoints[2][13] = 1;

    globalPoints[0][14] = 16;
    globalPoints[1][14] = 0;
    globalPoints[2][14] = 1;

    globalPoints[0][15] = 16;
    globalPoints[1][15] = 3;
    globalPoints[2][15] = 1;

    globalPoints[0][16] = 17;
    globalPoints[1][16] = 3;
    globalPoints[2][16] = 1;

    globalPoints[0][17] = 17;
    globalPoints[1][17] = 4;
    globalPoints[2][17] = 1;

    globalPoints[0][18] = 18;
    globalPoints[1][18] = 4;
    globalPoints[2][18] = 1;

    globalPoints[0][19] = 18;
    globalPoints[1][19] = 5;
    globalPoints[2][19] = 1;

    globalPoints[0][20] = 16;
    globalPoints[1][20] = 5;
    globalPoints[2][20] = 1;

    globalPoints[0][21] = 16;
    globalPoints[1][21] = 6;
    globalPoints[2][21] = 1;

    globalPoints[0][22] = 15;
    globalPoints[1][22] = 6;
    globalPoints[2][22] = 1;

    globalPoints[0][23] = 15;
    globalPoints[1][23] = 9;
    globalPoints[2][23] = 1;

    globalPoints[0][24] = 0;
    globalPoints[1][24] = 9;
    globalPoints[2][24] = 1;

    globalPoints[0][25] = -1;
    globalPoints[1][25] = 9;
    globalPoints[2][25] = 1;

    globalPoints[0][26] = -2;
    globalPoints[1][26] = 8;
    globalPoints[2][26] = 1;

    globalPoints[0][27] = -2;
    globalPoints[1][27] = 5;
    globalPoints[2][27] = 1;

    globalPoints[0][28] = -3;
    globalPoints[1][28] = 4;
    globalPoints[2][28] = 1;

    globalPoints[0][29] = -2;
    globalPoints[1][29] = 4;
    globalPoints[2][29] = 1;

    globalPoints[0][30] = -1;
    globalPoints[1][30] = 3;
    globalPoints[2][30] = 1;

    globalPoints[0][31] = -1;
    globalPoints[1][31] = 8;
    globalPoints[2][31] = 1;

    globalPoints[0][32] = 0;
    globalPoints[1][32] = 8;
    globalPoints[2][32] = 1;

    globalPoints[0][33] = 0;
    globalPoints[1][33] = 0;
    globalPoints[2][33] = 1;

    //cabeza
    globalPoints[0][34] = 13;
    globalPoints[1][34] = 12;
    globalPoints[2][34] = 1;

    globalPoints[0][35] = 13;
    globalPoints[1][35] = 11;
    globalPoints[2][35] = 1;

    globalPoints[0][36] = 14;
    globalPoints[1][36] = 11;
    globalPoints[2][36] = 1;

    globalPoints[0][37] = 14;
    globalPoints[1][37] = 10;
    globalPoints[2][37] = 1;

    globalPoints[0][38] = 15;
    globalPoints[1][38] = 10;
    globalPoints[2][38] = 1;

    globalPoints[0][39] = 15;
    globalPoints[1][39] = 6;
    globalPoints[2][39] = 1;

    globalPoints[0][40] = 16;
    globalPoints[1][40] = 6;
    globalPoints[2][40] = 1;

    globalPoints[0][41] = 16;
    globalPoints[1][41] = 5;
    globalPoints[2][41] = 1;

    globalPoints[0][42] = 21;
    globalPoints[1][42] = 5;
    globalPoints[2][42] = 1;

    globalPoints[0][43] = 21;
    globalPoints[1][43] = 8;
    globalPoints[2][43] = 1;

    globalPoints[0][44] = 19;
    globalPoints[1][44] = 8;
    globalPoints[2][44] = 1;

    globalPoints[0][45] = 19;
    globalPoints[1][45] = 10;
    globalPoints[2][45] = 1;

    globalPoints[0][46] = 20;
    globalPoints[1][46] = 10;
    globalPoints[2][46] = 1;

    globalPoints[0][47] = 20;
    globalPoints[1][47] = 11;
    globalPoints[2][47] = 1;

    globalPoints[0][48] = 21;
    globalPoints[1][48] = 11;
    globalPoints[2][48] = 1;

    globalPoints[0][49] = 21;
    globalPoints[1][49] = 12;
    globalPoints[2][49] = 1;

    globalPoints[0][50] = 18;
    globalPoints[1][50] = 12;
    globalPoints[2][50] = 1;

    globalPoints[0][51] = 18;
    globalPoints[1][51] = 11;
    globalPoints[2][51] = 1;

    globalPoints[0][52] = 16;
    globalPoints[1][52] = 11;
    globalPoints[2][52] = 1;

    globalPoints[0][53] = 16;
    globalPoints[1][53] = 12;
    globalPoints[2][53] = 1;

    globalPoints[0][54] = 13;
    globalPoints[1][54] = 12;
    globalPoints[2][54] = 1;

    //ojo1
    globalPoints[0][55] = 16;
    globalPoints[1][55] = 10;
    globalPoints[2][55] = 1;

    globalPoints[0][56] = 16;
    globalPoints[1][56] = 8;
    globalPoints[2][56] = 1;

    globalPoints[0][57] = 17;
    globalPoints[1][57] = 8;
    globalPoints[2][57] = 1;

    globalPoints[0][58] = 17;
    globalPoints[1][58] = 10;
    globalPoints[2][58] = 1;

    globalPoints[0][59] = 16;
    globalPoints[1][59] = 10;
    globalPoints[2][59] = 1;

    //ojo2

    globalPoints[0][60] = 18;
    globalPoints[1][60] = 10;
    globalPoints[2][60] = 1;

    globalPoints[0][61] = 18;
    globalPoints[1][61] = 8;
    globalPoints[2][61] = 1;

    globalPoints[0][62] = 19;
    globalPoints[1][62] = 8;
    globalPoints[2][62] = 1;

    globalPoints[0][63] = 19;
    globalPoints[1][63] = 10;
    globalPoints[2][63] = 1;

    globalPoints[0][64] = 18;
    globalPoints[1][64] = 10;
    globalPoints[2][64] = 1;

    //boca
    globalPoints[0][65] = 19;
    globalPoints[1][65] = 8;
    globalPoints[2][65] = 1;

    globalPoints[0][66] = 19;
    globalPoints[1][66] = 5;
    globalPoints[2][66] = 1;

    for(int i=34;i<=66;i++){
        headPoints[0][i]=globalPoints[0][i];
        headPoints[1][i]=globalPoints[1][i];
        headPoints[2][i]=globalPoints[2][i];
    }

}

void Vaca::createTorso()

{
    GLdouble (*p)[3][POINTS] = &renderMatrix;
    GLfloat colors [3] = {0, 0, 0};
    GLint width = 3;
    int x1, x2, y1, y2;
    int i;
    for(i=0;i<33;i++){

        x1 = (*p)[0][i]; y1 = (*p)[1][i];
        x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
        linea.draw(x1, y1, x2, y2, colors, width);

    }
}

void Vaca::createCabeza()

{
    GLdouble (*p)[3][POINTS] = &renderHeadMatrix;
    GLfloat colors [3] = {0, 0, 0};
    GLint width = 3;
    int x1, x2, y1, y2;
    int i;
    for(i=34;i<54;i++){
        x1 = (*p)[0][i]; y1 = (*p)[1][i];
        x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
        linea.draw(x1, y1, x2, y2, colors, width);
    }

    //ojo1

   for(i=55;i<59;i++){
        x1 = (*p)[0][i]; y1 = (*p)[1][i];
        x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
        linea.draw(x1, y1, x2, y2, colors, width);
    }

    //ojo2

   for(i=60;i<64;i++){
        x1 = (*p)[0][i]; y1 = (*p)[1][i];
        x2 = (*p)[0][i+1]; y2 = (*p)[1][i+1];
        linea.draw(x1, y1, x2, y2, colors, width);
    }
    //boca
        colors[0]=1.0;
        colors[1]=.790;
        colors[2]=.80;
        x1 = (*p)[0][65]; y1 = (*p)[1][65];
        x2 = (*p)[0][66]; y2 = (*p)[1][66];
        linea.draw(x1, y1, x2, y2, colors, width);

}

void Vaca::rotateHead(){

    matrix.rotation(rotar,opMatrixHead);

}

void Vaca:: draw()
{
    matrix.multiplication(opMatrix,*globalPoints,*renderMatrix,POINTS);
    matrix.multiplication(opMatrixHead,*headPoints,*renderHeadMatrix,POINTS);

    createTorso();
    createCabeza();
}

void Vaca::update(){
    if (rotar > .5 && invertir){
        incremento = -.05;
        invertir = false;
    }

    if (rotar < -.5 && !invertir){
        incremento = .05;
        invertir = true;
    }

    rotar += incremento;
    rotateHead();
}

void Vaca::setDefaulScale(GLdouble x, GLdouble y){
    defaultScale[0] = x;
    defaultScale[1] = y;

    matrix.scaling(x,y,opMatrix);
    matrix.scaling(x,y,opMatrixHead);
}

void Vaca::setDefaultTranslation(GLdouble x, GLdouble y){
    defaultTranslation[0] = x;
    defaultTranslation[1] = y;

    matrix.translation(0,-17,opMatrix);
    matrix.translation(0,-17,opMatrixHead);
}

void Vaca::setDefaultRotation(GLdouble x, GLdouble y){
    defaultRotation[0] = x;
    defaultRotation[1] = y;
}

Vaca::Vaca()
{
    loadGlobalPoints();

    incremento=0;
    incrementoCabeza=0;

    altura=.5;
    rotar=.6;

    invertir=true;
    invertir2=true;
}
