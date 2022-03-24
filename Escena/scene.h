#ifndef SCENE_H_INCLUDEDC:\Users\saman\Documents\Last one\Graficas\GC_AnimacionGranjita\main.cpp
#define SCENE_H_INCLUDED

#include "../Objetos/cottage.h"
#include "../Objetos/sun.h"

class Scene {
private:
    Cottage cottage;
    Sun sun;
    GLfloat sunscale = 0.5, x = 1 ;
    bool sungrowing = true;

public:
    void draw();
    void sunUpdate();
    void update();

    Scene();
};

#endif // SCENE_H_INCLUDED
