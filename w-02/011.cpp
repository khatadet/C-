#include <iostream>
#include <string>
using namespace std;

int sum(int, int);

int main()
{
    int x = 30, y = 20;
    /*
    cout << "input value x = ";
    cin >> x;
    cout << "input value y = ";
    cin >> y;
    */
    int i = sum(x, y);
    cout << i << endl;
    //cout << sum(x, y);
    return 0;
}

int sum(int x, int y)
{
    int f;
    f = x + y;
    return f;
}