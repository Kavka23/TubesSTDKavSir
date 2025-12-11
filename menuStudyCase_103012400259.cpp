#include <iostream>
#include "header.h"
using namespace std;

void menuStudiKasus_103012400259(uList &L) {
    char pil;

    do {
        cout << "\n===== MENU STUDI KASUS (SIR) =====\n";
        cout << "1. Tambah UKM (ID ascending)\n";
        cout << "2. Hapus UKM berdasarkan ID\n";
        cout << "3. Cari UKM berdasarkan ID\n";
        cout << "4. Cari UKM berdasarkan Nama\n";
        cout << "5. Tampilkan Semua UKM\n";
        cout << "6. Komputasi: Hitung total UKM\n";
        cout << "7. Komputasi: Hitung UKM berdasarkan jenis\n";
        cout << "8. Tambah Mahasiswa ke UKM\n";
        cout << "9. Hapus Mahasiswa dari UKM\n";
        cout << "10. Cari Mahasiswa Global\n";
        cout << "11. Tampilkan Semua Mahasiswa (Unique)\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pil;

        switch (pil) {

        case '1': {
            string nama, id, jenis;
            cout << "Nama UKM  : "; cin >> nama;
            cout << "ID UKM    : "; cin >> id;
            cout << "Jenis UKM : "; cin >> jenis;
            insertUKMByID_103012400259(L, nama, id, jenis);
            break;
        }

        case '2': {
            string id;
            cout << "ID UKM yang ingin dihapus : ";
            cin >> id;
            deleteUKMByID_103012400259(L, id);
            break;
        }

        case '3': {
            string id;
            cout << "Masukkan ID UKM: ";
            cin >> id;
            addressU p = findUKM_103012400259(L, id);
            if (p)
                cout << "Ditemukan: " << p->info.nama << " (" << p->info.jenis << ")\n";
            else
                cout << "Tidak ditemukan.\n";
            break;
        }

        case '4': {
            string nama;
            cout << "Masukkan Nama UKM: ";
            cin >> nama;
            addressU p = findUKMByName_103012400259(L, nama);
            if (p)
                cout << "Ditemukan: ID: " << p->info.ID << ", Jenis: " << p->info.jenis << endl;
            else
                cout << "Tidak ditemukan.\n";
            break;
        }

        case '5':
            viewUKM_103012400259(L);
            break;

        case '6':
            cout << "Total UKM: " << countUKM_103012400259(L) << endl;
            break;

        case '7': {
            string jenis;
            cout << "Masukkan jenis UKM: ";
            cin >> jenis;
            cout << "Jumlah UKM dengan jenis " << jenis << " = "
                 << countUKMByJenis_103012400259(L, jenis) << endl;
            break;
        }

        case '8': {
            string id, nama, nim, kelas;
            cout << "ID UKM  : "; cin >> id;
            cout << "Nama    : "; cin >> nama;
            cout << "NIM     : "; cin >> nim;
            cout << "Kelas   : "; cin >> kelas;
            insertMhsByCondition_103012400339(L, id, nama, nim, kelas);
            break;
        }

        case '9': {
            string id, nim;
            cout << "ID UKM : "; cin >> id;
            cout << "NIM    : "; cin >> nim;
            deleteMhsByCondition_103012400339(L, id, nim);
            break;
        }

        case '10': {
            string nim;
            cout << "NIM mahasiswa: "; cin >> nim;
            addressM m = findMhsGlobal_103012400339(L, nim);
            if (m) {
                cout << "Mahasiswa ditemukan!\n";
                cout << "Nama: " << m->info.nama << endl;
                cout << "Kelas: " << m->info.Kelas << endl;
            } else {
                cout << "Tidak ditemukan.\n";
            }
            break;
        }

        case '11':
            viewAllMhsUnique_103012400339(L);
            break;

        case 0:
            cout << "Kembali...\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pil != '0');
}
