#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,y;
    x = 10;
    y = 20;
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout << " * ";
        }
        cout << endl;
    }
}