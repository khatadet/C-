#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
   //string s;
   char c[50]="hgohrewofhofshdo";
   //cin >> c;

   c[5]='\n';
   c[10]='\0';

   char *pc;

   pc = &c[0];
   printf("%c\n",c[0]);
   printf("%c\n",&pc);
   printf("%c\n",c[1]);
   printf("%c\n",&pc);
   

   //cout << sizeof(c)<< endl;
   //cout << c << endl;
    return 0;

}

