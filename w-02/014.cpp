#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



int main()
{
    int y = 10;
    
     for (int i = 0; i <= y; i++)
    {
       i%2 == 0 ? cout << i%2 <<" X"<<endl : cout << i%2 <<" O"<<endl ;
    }
    return 0;
}
