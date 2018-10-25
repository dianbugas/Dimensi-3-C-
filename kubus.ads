    #include <iostream>

    using namespace std;

    int main(int argc, char *argv[])
    {
    int s;
    float luas_permukaan_kubus;
    cout<<"Program Menghitung Luas Kubus"<<endl<<endl;
    cout<<"Masukan nilai sisi ( s ) = ";
    cin>>s;
    luas_permukaan_kubus=6*s*s;
    cout<<endl;
    cout<<"Luas permukaan kubus dengan sisi "<<s<<" adalah "<<luas_permukaan_kubus;
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    }
