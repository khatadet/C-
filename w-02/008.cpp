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
        cout << "value = x 0225";
        break;
    case 'y':
        cout << "value = y 3566";
        break;
    case 'z':
        cout << "value = z 6468";
        break;
    default:
        cout << "other value";
    }
    return 0;
}