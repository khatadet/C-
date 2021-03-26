#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    do{
        cout << i++ << endl;
        if(i>6){
            break;
        }
    }while(i<10);
    return 0;
}