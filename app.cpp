#include "mygeom.h"
#include <iostream>

using namespace std;

int main(int argc, char*argv[])
{
    MyGeom rect(3.0, 4.0);
    cout << "Area is: " << rect.area() << "\n";

    return 0;
}

