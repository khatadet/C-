#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s;
    cout << "input value" << endl;
    cin >> s;
    switch (s)
    {
    case 'x':
        cout << "value = x";
        break;
    case 'y':
        cout << "value = y";
        break;
    case 'z':
        cout << "value = z";
        break;
    default:
        cout << "other value";
    }
    return 0;
}