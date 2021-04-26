#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int x = 2;
    int y = 100;
    
    //printf("%2s  %2d  %2d\n\n","M",2,3);
    for (int i=1;i<=12;i++){
        
        for(int j=x;j<x+y;j++){
            printf("%5d",i*j);
        }
        printf("\n");
    }
    
    return 0;
}