#include "scene.h"

Scene::Scene() {
    cottage.setDefaulScale(15, 15);
    cottage.setDefaultTranslation(-40, -15);
}

void Scene::draw(){
    cottage.draw();
    sun.draw();
}

void Scene::update() {

}
