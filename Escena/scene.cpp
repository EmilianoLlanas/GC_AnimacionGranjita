#include "scene.h"



Scene::Scene() {
    cottage.setDefaulScale(15, 15);
    cottage.setDefaultTranslation(-40, -15);
}

void Scene::draw(){
    cottage.draw();
    sun.draw(sunscale, x);
}

void Scene::sunUpdate(){

    sunscale=0.1;

    x = 10;

    sun.draw(sunscale, x);


}

void Scene::update() {

    glClear(GL_COLOR_BUFFER_BIT);
    cottage.draw();
    sunUpdate();
    glFlush();

    Sleep(15);
}
