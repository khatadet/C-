#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int f;
    f = x + y;
    return f;
}

int DC(int x){
    
    x--;
    cout << x << endl;
    x == 0 ? : DC(x);
    
    return 0;

}

int DC(float x){
    x--;
    
    x == 0 ? : DC(x);
    cout << x << endl;
    return 0;

}
