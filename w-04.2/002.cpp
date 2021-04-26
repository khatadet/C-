#include <iostream>
#include <string>
using namespace std;

long double pow(float y,int x){
    long double l=1;
     for (int j=0;j<x;j++){
           l = l*y;
        }
    return l;
}

int main()
{
    int x = 18;
    int y = 2;
    long long t = 0;
    long double u = 0;
    long double c;
    //cout << pow(10,18)<<endl;
    for (float i = 0; u < x; i+=0.000001)
    {
        
        //cout << u<<"  "<<c<<endl;
        u = pow(i,y);
        if (u < x)
        c=i;
        
    }
    
    cout << u<<"  "<<c;
    return 0;

}

