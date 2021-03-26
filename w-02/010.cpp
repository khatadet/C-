#include <iostream>
#include <string>
using namespace std;

void sum(int ,int);

int main()
{
    int x, y;
    cout << "input value x = ";
    cin >> x;
    cout << "input value y = ";
    cin >> y;
    sum(x, y);
    return 0;
}

void sum(int x, int y)
{
    int f;
    f = x + y;
    cout << "x + y = " << f << endl;
}