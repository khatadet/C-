#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n[] = {2, 6, 4, 5, 2, 5, 2, 5, 6, 3, 4, 2, 5, 3, 5, 2, 't', 2, 9};
    int h[] = {2, 6, 4, 5, 2, 5, 2, 5, 6, 3, 2, 9};
    int g[(sizeof(n) / sizeof(n[0]))+(sizeof(h) / sizeof(h[0]))];
    int cut=0,p=0;
    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        for (int j = 0; j < sizeof(h) / sizeof(h[0]); j++)
        {
            if (n[i] == h[j])
            {
                cout << n[i] << endl;
                for (int k;k< sizeof(g) / sizeof(g[0]);k++){
                    if(g[k]==n[i]);
                    p ++;
                }
                if (p!=0){
                    g[cut]=n[i];
                    cut++;
                    p=0;
                }
            }
        }
    }
    //cout << n;
    return 0;
}