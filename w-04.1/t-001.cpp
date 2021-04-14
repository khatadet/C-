#include <iostream>
#include <string>
using namespace std;

int main()
{
    for(int i=0;i<50;i++){
        cout<<i<<"  ";
        if(i < 20)  
            i+=2;
        else 
            break ;
    }
    return 0;
}