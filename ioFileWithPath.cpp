#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    //Membuka file dalam mode menulis.
    ofstream outFile;
    //menunjuk ke sebuah nama file .
    outFile.open("contohfile.txt");

    cout << ">= Menulis file, \' q\' untuk keluar" << endl;

    //unlimited lopp untuk menulis
    while(true)
    {
        cout << "_ ";
        //mendapatkan setiap karakter dalam satu baris 
        getline(cin, baris);
        //loop akan terhenti jika anda memasukkan karakter q
        if (baris == "q" ) break;
        //menulis dan memasukkan nilai dari baris ke dalam file
        outFile << baris << endl;
    }
    //selesai dalam menulis sekarang tututp filenya
    outFile.close();

    //Membuka file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file 
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan Membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris 
        while (getline(infile, baris)) 
        {
            //dan  tampilkan disini
            cout << baris << "\n";
        }
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}