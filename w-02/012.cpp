#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    int y =10;
    for(int i = 0; i<=y*3;i++){
       
        cout << setw(3)<<i;
    }
    
    cout << endl;

    for (int i=0;i<=y*2;i++){
        for (int j=0;j<=3*y;j++){
            if (((i>=j) || (((y-i)+y*2)<=j))  || (j-i <= (y*3)/2) && (j+i >= (y*3)/2)  )
            
            {
                cout << " X ";
            }else{
                cout << " - ";
            }
            
        }
        cout<<endl;
    }
    cin>> y;
    return 0;
}
