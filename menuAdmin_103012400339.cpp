#include <iostream>
#include "header.h"
using namespace std;

void menuAdmin_103012400339(uList &L) {
    int pilih;
    string nama, ID, jenis, IDprec;
    string nim, kelas, nimPrec;

    addressU u, precU, hapusU;
    addressM m, precM, hapusM;

    do {
        cout << "\n===== MENU DATA UKM & MAHASISWA =====\n";

        cout << "=== UKM ===\n";
        cout << "1. Tambah UKM di awal\n";
        cout << "2. Tambah UKM di akhir\n";
        cout << "3. Tambah UKM setelah ID tertentu\n";
        cout << "4. Hapus UKM di awal\n";
        cout << "5. Hapus UKM di akhir\n";
        cout << "6. Hapus UKM setelah ID tertentu\n";
        cout << "7. Cari UKM\n";
        cout << "8. Lihat semua UKM\n";

        cout << "\n=== MAHASISWA (Pilih UKM dulu) ===\n";
        cout << "9. Tambah Mahasiswa di awal\n";
        cout << "10. Tambah Mahasiswa di akhir\n";
        cout << "11. Tambah Mahasiswa setelah NIM tertentu\n";
        cout << "12. Hapus Mahasiswa di awal\n";
        cout << "13. Hapus Mahasiswa di akhir\n";
        cout << "14. Hapus Mahasiswa setelah NIM tertentu\n";
        cout << "15. Cari Mahasiswa\n";
        cout << "16. Lihat semua Mahasiswa\n";

        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {

        case 1:
            cout << "\nNama UKM : ";
            cin >> nama;
            cout << "ID UKM   : ";
            cin >> ID;
            cout << "Jenis UKM: ";
            cin >> jenis;

            u = createElmListUKM_103012400259(nama, ID, jenis);
            insertFirstUKM_103012400259(L, u);
            cout << "UKM ditambahkan di awal.\n";
            break;

        case 2:
            cout << "\nNama UKM : ";
            cin >> nama;
            cout << "ID UKM   : ";
            cin >> ID;
            cout << "Jenis UKM: ";
            cin >> jenis;

            u = createElmListUKM_103012400259(nama, ID, jenis);
            insertLastUKM_103012400259(L, u);
            cout << "UKM ditambahkan di akhir.\n";
            break;

        case 3:
            cout << "\nMasukkan ID acuan: ";
            cin >> IDprec;

            precU = findUKM_103012400259(L, IDprec);

            if (precU != nullptr) {
                cout << "Nama UKM baru : ";
                cin >> nama;
                cout << "ID UKM baru   : ";
                cin >> ID;
                cout << "Jenis UKM baru: ";
                cin >> jenis;

                u = createElmListUKM_103012400259(nama, ID, jenis);
                insertAfterUKM_103012400259(L, precU, u);
                cout << "Insert-after berhasil!\n";
            } else {
                cout << "ID tidak ditemukan!\n";
            }
            break;

        case 4:
            deleteFirstUKM_103012400259(L, hapusU);
            if (hapusU) {
                cout << "UKM \"" << hapusU->info.nama << "\" dihapus.\n";
                delete hapusU;
            } else cout << "List UKM kosong!\n";
            break;

        case 5:
            deleteLastUKM_103012400259(L, hapusU);
            if (hapusU) {
                cout << "UKM \"" << hapusU->info.nama << "\" dihapus.\n";
                delete hapusU;
            } else cout << "List UKM kosong!\n";
            break;

        case 6:
            cout << "\nMasukkan ID acuan: ";
            cin >> IDprec;
            precU = findUKM_103012400259(L, IDprec);

            if (precU) {
                deleteAfterUKM_103012400259(L, precU, hapusU);
                if (hapusU) {
                    cout << "UKM \"" << hapusU->info.nama << "\" dihapus.\n";
                    delete hapusU;
                } else cout << "Tidak ada node setelah ID tersebut.\n";
            } else cout << "ID tidak ditemukan!\n";
            break;

        case 7:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;

            u = findUKM_103012400259(L, ID);
            if (u) {
                cout << "\n=== DATA UKM ===\n";
                cout << "Nama  : " << u->info.nama << endl;
                cout << "ID    : " << u->info.ID << endl;
                cout << "Jenis : " << u->info.jenis << endl;
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 8:
            viewUKM_103012400259(L);
            break;

        case 9:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                cout << "Nama : "; cin >> nama;
                cout << "NIM  : "; cin >> nim;
                cout << "Kelas: "; cin >> kelas;

                m = createElmListMhs_103012400339(nama, nim, kelas);
                insertFirstMHS_103012400339(u, m);

                cout << "Mahasiswa ditambah di awal.\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 10:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                cout << "Nama : "; cin >> nama;
                cout << "NIM  : "; cin >> nim;
                cout << "Kelas: "; cin >> kelas;

                m = createElmListMhs_103012400339(nama, nim, kelas);
                insertLastMHS_103012400339(u, m);

                cout << "Mahasiswa ditambah di akhir.\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 11:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                cout << "Masukkan NIM acuan: ";
                cin >> nimPrec;

                precM = findMHS_103012400339(u, nimPrec);

                if (precM) {
                    cout << "Nama : "; cin >> nama;
                    cout << "NIM  : "; cin >> nim;
                    cout << "Kelas: "; cin >> kelas;

                    m = createElmListMhs_103012400339(nama, nim, kelas);
                    insertAfterMHS_103012400339(u, precM, m);

                    cout << "Insert-after berhasil.\n";
                } else cout << "NIM tidak ditemukan!\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 12:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                deleteFirstMHS_103012400339(u, hapusM);
                if (hapusM) {
                    cout << "Mahasiswa dihapus: " << hapusM->info.nama << endl;
                    delete hapusM;
                } else cout << "List mahasiswa kosong!\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 13:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                deleteLastMHS_103012400339(u, hapusM);
                if (hapusM) {
                    cout << "Mahasiswa dihapus: " << hapusM->info.nama << endl;
                    delete hapusM;
                } else cout << "List mahasiswa kosong!\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 14:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                cout << "Masukkan NIM acuan delete-after: ";
                cin >> nimPrec;

                precM = findMHS_103012400339(u, nimPrec);

                if (precM) {
                    deleteAfterMHS_103012400339(u, precM, hapusM);
                    if (hapusM) {
                        cout << "Mahasiswa dihapus.\n";
                        delete hapusM;
                    } else cout << "Tidak ada mahasiswa setelah NIM itu.\n";
                } else cout << "NIM tidak ditemukan!\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 15:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                cout << "Masukkan NIM: ";
                cin >> nim;

                m = findMHS_103012400339(u, nim);

                if (m) {
                    cout << "\n=== DATA MAHASISWA ===\n";
                    cout << "Nama  : " << m->info.nama << endl;
                    cout << "NIM   : " << m->info.NIM << endl;
                    cout << "Kelas : " << m->info.Kelas << endl;
                } else cout << "Mahasiswa tidak ditemukan!\n";
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 16:
            cout << "\nMasukkan ID UKM: ";
            cin >> ID;
            u = findUKM_103012400259(L, ID);

            if (u) {
                viewMHS_103012400339(u);
            } else cout << "UKM tidak ditemukan!\n";
            break;

        case 0:
            cout << "Kembali ke menu utama...\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilih != 0);
}
