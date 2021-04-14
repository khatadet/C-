#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[] = "Don't judge a book by its cover.";
    cout<< sizeof(s)/sizeof(s[0])<<endl ;
    for(int i=0;i<sizeof(s)/sizeof(s[0]);i++){
        cout<<s[i];
    }
    
    return 0;
}
