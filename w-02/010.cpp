#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void sum(int, int);
void sum(char, int);

int main()
{
    char t = 'r';
    int x, y;
    cout << "input value x = ";
    cin >> x;
    cout << "input value y = ";
    cin >> y;

    //t = (char)x;
    printf("t = %d \n",t);
    sum(t, y);
    sum(x, y);

    return 0;
}

void sum(int a, int b)
{
    int f;
    f = a + b;
    cout << "x + y = " << f << endl;
    
}
void sum(char a, int b)
{
    int f;
    f = a - b;
    cout << "x - y = " << f << endl;
}