#include <iostream>
#include <string>
#include <iomanip>

#include "002.h"

using namespace std;

int main()
{
    int y = 10;
    cout << "DC -" << endl;
    DC(y);
    cout << endl;
    cout << "DC +" << endl;
    DC((float)y);
    return 0;
}
