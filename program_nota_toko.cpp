#include <iostream>
#include <iomanip>
using namespace std;

struct Barang {
    string nama;
    int jumlah;
    float harga;
};

int main() {
    const int maksBarang = 10;
    Barang daftarBarang[maksBarang];
    int totalBarang;
    float totalBelanja = 0;

    cout << "=== TOKO KOPERASI MUHAMMADIYAH ===" << endl;
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> totalBarang;

    for (int i = 0; i < totalBarang; i++) {
        cout << "\nBarang ke-" << i+1 << endl;
        cout << "Nama barang  : ";
        cin.ignore();
        getline(cin, daftarBarang[i].nama);
        cout << "Jumlah       : ";
        cin >> daftarBarang[i].jumlah;
        cout << "Harga satuan : ";
        cin >> daftarBarang[i].harga;
        totalBelanja += daftarBarang[i].jumlah * daftarBarang[i].harga;
    }

    cout << "\n\n=========== STRUK PEMBELIAN ===========" << endl;
    cout << left << setw(20) << "Nama Barang" 
         << setw(10) << "Jumlah" 
         << setw(15) << "Harga"
         << setw(15) << "Total" << endl;
    cout << "----------------------------------------------" << endl;

    for (int i = 0; i < totalBarang; i++) {
        float subtotal = daftarBarang[i].jumlah * daftarBarang[i].harga;
        cout << left << setw(20) << daftarBarang[i].nama
             << setw(10) << daftarBarang[i].jumlah
             << setw(15) << daftarBarang[i].harga
             << setw(15) << subtotal << endl;
    }

    cout << "----------------------------------------------" << endl;
    cout << right << setw(45) << "Total Belanja: Rp " << fixed << setprecision(2) << totalBelanja << endl;

    cout << "Terima kasih telah berbelanja!\n";
    return 0;
}

