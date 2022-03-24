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


    //if()
    //sunscale+=0.1;


    x = 10;



    /*if(sun.scalinf >= 1.5)
        sungrowing = false;
    else if(sun.scale <= 0.5)
        sungrowing = true;

    if(sungrowing == true)
        sun.scale+=0.01;
    else
        sun.scale-=0.01;*/

    sun.draw(sunscale, x);

    //Sleep(20);

    //sun.tr

}

void Scene::update() {

    glClear(GL_COLOR_BUFFER_BIT);
    cottage.draw();
    sunUpdate();
    glFlush();

    Sleep(15);
}
