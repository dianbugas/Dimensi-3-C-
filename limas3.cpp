#include <iostream>
using namespace std;

int main()
{
    int luas_alas, sisi_tegak, tinggi;
    float luas, volume;

    cout<<"Masukkan nilai Luas alas     :";
    cin>>luas_alas;
    cout<<"Masukkan nilai Sisi tegak    :";
    cin>>sisi_tegak;
    cout<<"Masukkan nilai tinggi        :";
    cin>>tinggi;

    volume=0.3*luas_alas* tinggi;
    luas=luas_alas+sisi_tegak;

    cout<<" Luas Limas adalah       :"<<luas<<endl;
    cout<<" volume limas adalah     :"<<volume;
    return 0;
}
