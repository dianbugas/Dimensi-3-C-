#include <iostream>
using namespace std;

int main ()
{
    int panjang,lebar,tinggi;

    cout<<"Masukkan nilai panjang : ";
    cin>>panjang;
    cout<<"Masukkan nilai lebar   : ";
    cin>>lebar;
    cout<<"Masukkan nilai tinggi  : ";
    cin>>tinggi;

    float volume;
    volume=panjang*lebar*tinggi;
    float Lp;
    Lp=(2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi);
    float Kp;
    Kp=4 * (panjang + lebar + tinggi);

    cout<<endl;
    cout<<"Volume balok              : "<<volume<<endl;
    cout<<"Luas permukaan balok      : "<<Lp<<endl;
    cout<<"Keliling permukaan balok  : "<<Kp<<endl;
    return 0;
}

