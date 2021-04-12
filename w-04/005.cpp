#include <iostream>
#include <string>

using namespace std;
void show(int);
void show(char);
int main(){
    show(20);
    show('p');
    return 0;
} 

void show(int u){
    static int y = 1;
    cout << y<<endl;
    if(y<u){
        y++;
        show(u);
    }else{
        cout<<"end"<<endl;
    } 

}
void show(char u){
    static int y = 1;
    cout << y<<endl;
    if(y<u){
        y+=5;
        show(u);
    }else{
        cout<<"end"<<endl;
    } 
    
}