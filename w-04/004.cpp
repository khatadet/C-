#include <iostream>
#include <string>

using namespace std;
void pr(int);
int main(){
    pr(1000);
    return 0;
}    

void pr(int u){
    for (int i=1;i<u;i++){
       int count = 0;
        
        for (int j=1;j<u;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout << i<<endl;
        }
    }
}
