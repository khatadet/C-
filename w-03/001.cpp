#include <iostream>
#include "003.hpp"
using namespace std;
int main()
{
    Box b;
Box c;
    b.setBreadth(20);
    b.setHeight(20);
    b.setLength(20);
    cout << b.getVolume()<<endl;
    cout << c.getVolume()<<endl;

    return 0;
}