#include "scene.h"

Scene::Scene() {
    cottage.setDefaulScale(15, 15);
    cottage.setDefaultTranslation(-40, -15);
    vaca.setDefaulScale(13, 13);
    vaca.setDefaultTranslation(0, -17);
}

void Scene::draw(){
    cottage.draw();
    sun.draw();
    vaca.draw();
}

void Scene::update() {
    cottage.draw();
    sun.draw();
    vaca.update();
   // printf("holiwis");
}
