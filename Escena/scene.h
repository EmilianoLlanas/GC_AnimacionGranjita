#ifndef SCENE_H_INCLUDED
#define SCENE_H_INCLUDED

#include "../Objetos/cottage.h"
#include "../Objetos/sun.h"

class Scene {
private:
    Cottage cottage;
    Sun sun;

public:
    void draw();

    void update();

    Scene();
};

#endif // SCENE_H_INCLUDED
