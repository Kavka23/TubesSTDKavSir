#include <iostream>
#include "header.h"
using namespace std;

void insertMhsByCondition_103012400339(uList &L, string idUKM,
                                       string nama, string nim, string kelas) {
    addressU u = findUKM_103012400259(L, idUKM);
    if (u == NULL) {
        cout << "UKM dengan ID tersebut tidak ditemukan.\n";
        return;
    }
    addressM m = createElmListMhs_103012400339(nama, nim, kelas);
    insertLastMHS_103012400339(u, m);
    cout << "Mahasiswa berhasil ditambahkan ke UKM " << u->info.nama << endl;
}

void deleteMhsByCondition_103012400339(uList &L, string idUKM, string nim) {
    addressU u = findUKM_103012400259(L, idUKM);
    if (u == NULL) {
        cout << "UKM tidak ditemukan.\n";
        return;
    }

    addressM p = u->firstMhs;
    if (p == NULL) {
        cout << "Tidak ada mahasiswa di UKM ini.\n";
        return;
    }

    if (p->info.NIM == nim) {
        deleteFirstMHS_103012400339(u, p);
        cout << "Mahasiswa dengan NIM " << nim << " berhasil dihapus.\n";
        return;
    }

    addressM prec = p;
    p = p->next;
    while (p != NULL) {
        if (p->info.NIM == nim) {
            deleteAfterMHS_103012400339(u, prec, p);
            cout << "Mahasiswa dengan NIM " << nim << " berhasil dihapus.\n";
            return;
        }
        prec = p;
        p = p->next;
    }
    cout << "Mahasiswa tidak ditemukan.\n";
}

addressM findMhsGlobal_103012400339(uList L, string nim) {
    addressU u = L.first;
    while (u != NULL) {
        addressM m = findMHS_103012400339(u, nim);
        if (m != NULL) return m;
        u = u->next;
    }
    return NULL;
}

bool exists(string arr[], int n, string x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return true;
    }
    return false;
}

void viewAllMhsUnique_103012400339(uList L) {
    string printed[500];
    int k = 0;

    addressU u = L.first;
    while (u != NULL) {
        addressM m = u->firstMhs;
        while (m != NULL) {
            if (!exists(printed, k, m->info.NIM)) {
                cout << "Nama : " << m->info.nama << endl;
                cout << "NIM  : " << m->info.NIM << endl;
                cout << "Kelas: " << m->info.Kelas << endl;
                cout << "---------------------\n";

                printed[k++] = m->info.NIM;
            }
            m = m->next;
        }
        u = u->next;
    }
}
