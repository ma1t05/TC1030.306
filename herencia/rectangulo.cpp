#include "rectangulo.h"


rectangulo::rectangulo(){
    alto = 0;
    ancho = 0;
}

rectangulo::rectangulo(int x,int y,int a,int b) : shape(x,y) {
    alto = a;
    ancho = b;
}

string rectangulo::draw(){
    return "soy un rectangulo y " + shape::draw();
}

int rectangulo::GetAlto(){
    return alto;
}

int rectangulo::GetAncho(){
    return ancho;
}