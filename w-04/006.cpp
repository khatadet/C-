#include <ma
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


void U(int a,int b,int *c){
    //&c = a + b;
}


int main(){
    int *h;
    int f = 20; 
    h = &f;
    printf("%d",&h);
    //U(2,4,h);
    
    return 0;
} 
