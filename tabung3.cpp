#include<iostream>
using namespace std;

int main()
{
     float volume, luas, jari_jari, tinggi;
     cout<<"masukan jari_jari : ";
     cin>>jari_jari;
     cout<<"masukan tinggi    : ";
     cin>>tinggi;
    //rumus
     volume=3.14*(jari_jari*jari_jari)*tinggi;
     luas=2*3.14*jari_jari*(jari_jari+tinggi);

     cout<<"volume tabung   : "<<volume<<endl; // volume di ambil dari rumus
     cout<<"luas tabung     : "<<luas<<endl; // luas di ambil dari rumus
     return 0;
}
