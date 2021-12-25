#include <iostream>

using namespace std;

const int NMin = 1;
const int NMax = 7;
int i = 1;
int T[NMax];
int N;

int main(){
    while(true){
        cout<<"Masukkan N : ";
        cin>>N;
        if(NMin <= N && NMax>= N)
        break;

    for(i=NMin; i<N; i++){
        cin>>T[NMax];
    }

    for(i=NMin; i<N; i++){
        cin>>T[NMax];
    }
    return 0;
    }
}