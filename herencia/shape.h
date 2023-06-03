#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class shape {
    private:
        int x;
        int y;
    public:
        shape();
        shape(int,int);
        virtual string draw();
        int GetValX();
        int GetValY();
};

#endif