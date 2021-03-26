#include <iostream>
#include <string>
#include <iomanip>

#include "002.h"

using namespace std;


int main()
{
    int y = 10;
    
     for (int i = 0; i <= y; i++)
    {
       cout << sum(i,y)<< endl;
    }
    return 0;
}
