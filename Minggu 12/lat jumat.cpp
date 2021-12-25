#include <iostream>
using namespace std;

int main(){

    int k;
    for(k=1;k<=15;k++)
    {
        if(k%5==0)
        {
            cout<<"\n";
        }
        else
        {
            cout<<"*";
        }
    }

    return 0;
}
