#include <iostream>

using namespace std;

int main()
{
    int x = 50;
    float y;
    cout<< "x = ";
    cin >> x;
    for (float i =0.001;i*i<= x; i+=0.001){
        y = i;
    }
    cout << "x = " << x<<endl;
    cout << "y = " << y;
    cin >> y;
        return 0;
}
