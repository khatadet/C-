#include <stdio.h>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    //string myString;  // Attribute (string variable)
    void printNum(){
        printf("%d\n",myNum);
    }
};
