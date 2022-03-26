#include "scene.h"



Scene::Scene() {
    cottage.setDefaulScale(15, 15);
    cottage.setDefaultTranslation(-40, -15);
    vaca.setDefaulScale(13, 13);
    vaca.setDefaultTranslation(0, -17);
    tree.setDefaulScale(13, 13);
    tree.setDefaultTranslation(-20, -7.5);
    tree2.setDefaulScale(6, 6);
    tree2.setDefaultTranslation(-18, -7);
    tree1.setDefaulScale(12, 12);
    tree1.setDefaultTranslation(30, -9);
}

void Scene::draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    sun.draw();
    tree.draw();
    tree2.draw();
    tree1.draw();
    cottage.draw();
    vaca.draw();

}

void Scene::update() {
    vaca.update();
    sun.update();
    draw();
}
