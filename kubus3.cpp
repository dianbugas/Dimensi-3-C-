#include <iostream>
using namespace std;

int main()
{
    int sisi;
    float luas,volume,keliling;

    cout <<"Masukkan nilai sisi kubus   :";
    cin>>sisi;

    luas=6*sisi*sisi;
    volume=sisi*sisi*sisi;
    keliling=12*sisi;

    cout<<endl;
    cout<<"Luas permukaan kubus adalah         :"<<luas<<endl;
    cout<<"keliling permukaan kubus adalah     :"<<keliling<<endl;
    cout<<"Volume permukaan kubus adalah       :"<<volume;
    return 0;
}
