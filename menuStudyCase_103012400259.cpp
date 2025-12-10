#include <iostream>
#include "header.h"
using namespace std;

void menuStudiKasus_103012400259(uList &L) {
    int pil;
    do {
        cout << "\n===== MENU STUDI KASUS (SIR) =====\n";
        cout << "1. Tambah UKM (berdasarkan ID ascending)\n";
        cout << "2. Hapus UKM berdasarkan ID\n";
        cout << "3. Cari UKM berdasarkan ID\n";
        cout << "4. Cari UKM berdasarkan Nama\n";
        cout << "5. Tampilkan Semua UKM\n";
        cout << "6. Komputasi: Hitung total UKM\n";
        cout << "7. Komputasi: Hitung UKM berdasarkan jenis\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pil;

        if (pil == 1) {
            string nama, id, jenis;
            cout << "Nama UKM  : "; cin >> nama;
            cout << "ID UKM    : "; cin >> id;
            cout << "Jenis UKM : "; cin >> jenis;
            insertUKMByID_103012400259(L, nama, id, jenis);

        } else if (pil == 2) {
            string id;
            cout << "ID UKM yang ingin dihapus : ";
            cin >> id;
            deleteUKMByID_103012400259(L, id);

        } else if (pil == 3) {
            string id;
            cout << "Masukkan ID UKM: ";
            cin >> id;
            addressU p = findUKM_103012400259(L, id);
            if (p != NULL)
                cout << "Ditemukan: " << p->info.nama << " (" << p->info.jenis << ")\n";
            else
                cout << "Tidak ditemukan.\n";

        } else if (pil == 4) {
            string nama;
            cout << "Masukkan Nama UKM: ";
            cin >> nama;
            addressU p = findUKMByName_103012400259(L, nama);
            if (p != NULL)
                cout << "Ditemukan: ID: " << p->info.ID << ", Jenis: " << p->info.jenis << endl;
            else
                cout << "Tidak ditemukan.\n";

        } else if (pil == 5) {
            viewUKM_103012400259(L);

        } else if (pil == 6) {
            cout << "Total UKM: " << countUKM_103012400259(L) << endl;

        } else if (pil == 7) {
            string jenis;
            cout << "Masukkan jenis UKM: ";
            cin >> jenis;
            cout << "Jumlah UKM dengan jenis " << jenis << " = "
                 << countUKMByJenis_103012400259(L, jenis) << endl;
        }

    } while (pil != 0);
}
