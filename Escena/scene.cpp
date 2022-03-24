#include "scene.h"

Scene::Scene() {
    cottage.setDefaulScale(15, 15);
    cottage.setDefaultTranslation(-40, -15);
    vaca.setDefaulScale(13, 13);
    vaca.setDefaultTranslation(0, -17);
    tree.setDefaulScale(13, 13);
    tree.setDefaultTranslation(0, -30);
}

void Scene::draw(){
    cottage.draw();
    sun.draw();
    vaca.draw();
    tree.draw();
}

void Scene::update() {
    cottage.draw();
    sun.draw();
    vaca.update();
    tree.draw();
   // printf("holiwis");
}
