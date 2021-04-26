#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int x[5][10];

    int y[] = {1, 2, 3, 4, 5};
    x[0][0] = 1;
    x[0][1] = 1645;
    x[0][2] = 14;
    x[0][3] = -1145;
    x[0][4] = 1341;
    x[0][5] = 1654;
    x[0][6] = 1645;
    x[0][8] = 1456;
    x[0][9] = 14;

    cout << sizeof(x[0]) / sizeof(x[0][0]) << endl;
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        cout << "arr " << i << " = ";
        for (int j = 0; j < sizeof(x[i]) / sizeof(x[i][0]); j++)
        {
            //cout << j+1 << " = " << x[i][j] << "  ,";
            printf("%-2d = %12d ,",j+1,x[i][j]);
        }
        cout << endl;
    }

    return 0;
}