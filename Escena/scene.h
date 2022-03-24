#ifndef SCENE_H_INCLUDEDC:\Users\saman\Documents\Last one\Graficas\GC_AnimacionGranjita\main.cpp
#define SCENE_H_INCLUDED

#include "../Objetos/cottage.h"
#include "../Objetos/sun.h"
#include "../Objetos/vaca.h"
#include "../Objetos/tree.h"

class Scene {
private:
    Cottage cottage;
    Sun sun;
    Vaca vaca;
    Tree tree;
    Tree tree2;
    Tree tree1;
public:
    void draw();
    void sunUpdate();
    void update();

    Scene();
};

#endif // SCENE_H_INCLUDED
