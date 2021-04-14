#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 5000;
    float count = 0;
    for (float i = 0;i*i<num;i+=0.01){
        count = i;
    }
    cout<<count;
    return 0;
}
