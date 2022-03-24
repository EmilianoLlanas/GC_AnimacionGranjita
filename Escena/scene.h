#ifndef SCENE_H_INCLUDED
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

    void update();

    Scene();
};

#endif // SCENE_H_INCLUDED
