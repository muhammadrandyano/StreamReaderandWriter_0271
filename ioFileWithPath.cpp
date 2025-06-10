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
}