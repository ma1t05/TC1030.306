#include "shape.h"

shape::shape(){
    x = y = 0;
}

shape::shape(int a ,int b){
    x = a;
    y = b;
}

string shape::draw(){
    return "soy una figura";
}

int shape::GetValX(){
    return x;
}

int shape::GetValY(){
    return y;
}