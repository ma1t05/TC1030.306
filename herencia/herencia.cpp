#include <iostream>
#include "rectangulo.h"

using namespace std;

int main() {
    rectangulo r(1,2,4,6);
    shape *s = &r;
    cout << r.draw()
     << " con valor x en : " << r.GetValX()
     << " y valor y en : " << r.GetValY()
     << endl;
     cout << "rectangulo * " << s->draw() << endl;
    return 0;
}