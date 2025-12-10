#include <iostream>
#include "header.h"
using namespace std;

void menuAdmin_103012400339(uList &L) {
    int pilih;
    do {
        cout << "\n===== MENU ADMIN (KAV) =====\n";
        cout << "1. Tambah Mahasiswa ke UKM\n";
        cout << "2. Hapus Mahasiswa dari UKM\n";
        cout << "3. Cari Mahasiswa Global\n";
        cout << "4. Tampilkan Semua Mahasiswa (Unique)\n";
        cout << "0. Kembali\n";
        cout << "Pilih : ";
        cin >> pilih;

        if (pilih == 1) {
            string id, nama, nim, kelas;
            cout << "ID UKM  : "; cin >> id;
            cout << "Nama    : "; cin >> nama;
            cout << "NIM     : "; cin >> nim;
            cout << "Kelas   : "; cin >> kelas;
            insertMhsByCondition_103012400339(L, id, nama, nim, kelas);

        } else if (pilih == 2) {
            string id, nim;
            cout << "ID UKM : "; cin >> id;
            cout << "NIM    : "; cin >> nim;
            deleteMhsByCondition_103012400339(L, id, nim);

        } else if (pilih == 3) {
            string nim;
            cout << "NIM mahasiswa: "; cin >> nim;
            addressM m = findMhsGlobal_103012400339(L, nim);
            if (m != NULL) {
                cout << "Mahasiswa ditemukan!\n";
                cout << "Nama: " << m->info.nama << endl;
                cout << "Kelas: " << m->info.Kelas << endl;
            } else {
                cout << "Tidak ditemukan.\n";
            }

        } else if (pilih == 4) {
            viewAllMhsUnique_103012400339(L);
        }

    } while (pilih != 0);
}
