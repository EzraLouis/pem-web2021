#include <iostream>
using namespace std;

int main ()
{
    int array Nilai{5}={1;2;3;4;5};

    for(int nilai : arNilai)
    {
        cout<< nilai << endl;
        nilai=1;
    }
    cout << endl;
    cout << "========" << endl;

    for(int &nilaiAd : arNilai)
    {
        nilaiAd*2;
    }
    return 0;
}
