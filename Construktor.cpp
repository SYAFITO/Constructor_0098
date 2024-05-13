#include <iostream>
using namespace std;

class Mahasiswa{
     public:
        int nim;
        string nama;

    Mahasiswa(){
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim){
        nim = iNim;
    };
    Mahasiswa(string iNama);
    Mahasiswa(int iNim, string iNama);
     void cetak(){
        cout << "NIM    = " << nim << endl;
        cout << "Nama   = " << nama << endl;
        cout << endl;
    };
};

Mahasiswa::Mahasiswa(string iNama){
    nim = 0;
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama){
    nim = iNim;
    nama = iNama;
}

int main(){
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Syafito");
    Mahasiswa mhs4(30, "Denova");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
}