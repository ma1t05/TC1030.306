#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "shape.h"

class rectangulo : public shape {
    private:
        int alto;
        int ancho;
    public:
        rectangulo();
        rectangulo(int,int,int,int);
        string draw();
        int GetAlto();
        int GetAncho();
};

#endif