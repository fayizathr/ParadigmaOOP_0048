#include <iostream>
using namespace std;

class Barang {
public:
    string nama, kategori, tanggalProduksi;
    int jumlah;

    void tampil() {
        cout << nama << " | " << jumlah << " | "
             << kategori << " | " << tanggalProduksi << endl;
    }
};

int main() {
    Barang elektronik, nonElektronik;

    elektronik.nama = "Lampu";
    elektronik.jumlah = 13;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2008";

    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2029";

    elektronik.tampil();
    nonElektronik.tampil();

    return 0;
}