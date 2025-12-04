#include "ukm.h"
#include "mahasiswa.h"
#include <iostream>
using namespace std;


addressU alokasiUKM_103012400339(string nama) {
    addressU P;

    P = new elmUKM;
    P->info = nama;
    P->next = NULL;
    P->prev = NULL;
    createListMahasiswa_103012400339(P->anggota);
    return P;
}


bool insertMahasiswaToUKM_103012400339(mListUKM &L, string targetUKM, addressM M) {
    addressU P;
    
    P = L.first;

        while (P != NULL) {
            if (P->info == targetUKM) {
                insertMahasiswa_103012400339(P->anggota, M);
                return true;
            }
        P = P->next;
        }
    return false;
}


bool deleteMahasiswaFromUKM_103012400339(mListUKM &L, string targetUKM, string NIM) {
    addressU P;
    P = L.first;
        while (P != NULL) {
            if (P->info == targetUKM) {
                return deleteMahasiswa_103012400339(P->anggota, NIM);
            }
                P = P->next;
        }
return false;
}


void printUniqueMahasiswa_103012400339(mListUKM L) {
    cout << "===== LIST MAHASISWA UNIK =====\n";
    string printed[500]; 
    int count = 0;

    addressU P;
    P = L.first;

        while (P != NULL) {
            addressM M;
            M = P->anggota.first;

            while (M != NULL) {
                bool exists = false;
                for (int i = 0; i < count; i++) {
                    if (printed[i] == M->info.NIM) {
                        exists = true;
                    }
                    if (!exists) {
                        printed[count++] = M->info.NIM;
                        cout << "Nama : " << M->info.nama << "\n";
                        cout << "NIM : " << M->info.NIM << "\n";
                        cout << "Kelas : " << M->info.Kelas << "\n\n";
                    }
                            M = M->next;
                }
                    P = P->next;
            }
        }
}


void menuAdmin_103012400339() {
    cout << "===== MENU ADMIN =====\n";
    cout << "1. Tambah Mahasiswa ke UKM\n";
    cout << "2. Hapus Mahasiswa dari UKM\n";
    cout << "3. Cari Mahasiswa\n";
    cout << "4. Tampilkan Mahasiswa Unik\n";
    cout << "0. Keluar\n";
}