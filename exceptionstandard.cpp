#include <iostream>
#include <exception>
// untuk objek exception yang akan digunakan
#include <array>
// untuk objek array yang akan kita gunakan
using namespace std;

int main() {
    cout << "Awal Program" << endl; // penanda 1:...
    try {
        array<int, 3> data = {10,20,30};
        // int data[3] = {10,20,30}
        //pesan array integer 3 elemen
        cout<<data.at(5)<<endl;
        // memanggil array elemen ke 5
    }
    catch (exception& e) {
        // penangkap menggunakan objek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "baris Program yang terakhir" << endl;
    /*penanda 2: bahawa prgram berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}