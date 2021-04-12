//#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "UAT";
    string g = "UAT";
    s = s+"v\tjof";
    s = s + "\n";
    s = s + "orivtfgrtgvrtngtv";
    cout<<&s<<endl;
    cout<<&g<<endl;

     wchar_t f = '1060';
   cout << f << endl;
    
    return 0;
}