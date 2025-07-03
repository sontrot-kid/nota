# Build Program
```bash
# Buat program_nota_toko.exe
$ g++ program_nota_toko.cpp -o program_nota_toko
```
pastikan .exe sudah jadi

# Cara menjalankan program
```bash
$ ./program_nota_toko.exe
```
1. Isi jumlah barang (maksimal 10)
2. isi nama barang
3. isi jumlah barang
4. isi harga barang
5. lakukan disetiap barang lain
6. struk pembelian akan muncul

```bash
# Contoh
=== TOKO KOPERASI MUHAMMADIYAH ===
Masukkan jumlah barang yang dibeli: 2

Barang ke-1
Nama barang  : rokok
Jumlah       : 1
Harga satuan : 20000

Barang ke-2
Nama barang  : korek
Jumlah       : 1
Harga satuan : 3000


=========== STRUK PEMBELIAN ===========
Nama Barang         Jumlah    Harga          Total
----------------------------------------------
rokok               1         20000          20000
korek               1         3000           3000
----------------------------------------------
                           Total Belanja: Rp 23000.00
```