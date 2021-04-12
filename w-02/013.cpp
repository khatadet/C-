#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>

using namespace std;



int main()
{
    int y = 10;
    for (int i = 0; i <= y; i++)
    {
        for (int j = 0; j <= 2 * y; j++)
        {
            printf("%5d", i * j);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i <= y; i++)
    {
        for (int j = 0; j <= 2 * y; j++)
        {
            cout << setw(5) << i * j;
        }
        cout << endl;
    }
    return 0;
}
