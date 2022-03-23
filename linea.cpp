#include <GL/glut.h>
#include <iostream>

#include "punto.cpp"

class Linea {
    Punto punto;
public:
    void draw(int x1,int y1,int x2,int y2, GLfloat red, GLfloat green, GLfloat blue, GLfloat width)
    {

      int dx, dy, i, e;
      int incx, incy, inc1, inc2;
      int x,y;

      dx = x2 - x1;
      dy = y2 - y1;

      if(dx < 0) dx = -dx;

      if(dy < 0) dy = -dy;

      incx = 1;

      if(x2 < x1) incx = -1;

      incy = 1;

      if(y2 < y1) incy = -1;

      x=x1;
      y=y1;

      if(dx > dy) //Caso 1
        {
          punto.draw(x,y, red, green, blue, width);
          e = 2*dy - dx;
          inc1 = 2*(dy -dx);
          inc2 = 2*dy;

          for(i = 0; i < dx; i++)
          {
             if(e >= 0)
             {
                y += incy;
                e += inc1;
             }
             else e += inc2;
             x += incx;
             punto.draw(x,y, red, green, blue, width);
          }
       }
       else
       {
          punto.draw(x,y, red, green, blue, width);
          e = 2*dx - dy;
          inc1 = 2*( dx - dy);
          inc2 = 2*dx;
          for(i = 0; i < dy; i++)
          {
            if(e >= 0)
            {
               x += incx;
               e += inc1;
            }
            else e += inc2;
            y += incy;
            punto.draw(x,y, red, green, blue, width);
        }
      }
     }
};
