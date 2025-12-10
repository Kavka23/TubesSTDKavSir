#include <iostream>
#include "header.h"
using namespace std;

void insertUKMByID_103012400259(uList &L, string nama, string id, string jenis) {
    addressU p = createElmListUKM_103012400259(nama, id, jenis);

    if (L.first == NULL) {
        insertFirstUKM_103012400259(L, p);
        return;
    }

    addressU q = L.first;
    while (q != NULL && q->info.ID < id) {
        q = q->next;
    }

    if (q == L.first) {
        insertFirstUKM_103012400259(L, p);
    } else if (q == NULL) {
        insertLastUKM_103012400259(L, p);
    } else {
        insertAfterUKM_103012400259(L, q->prev, p);
    }
}

void deleteUKMByID_103012400259(uList &L, string id) {
    addressU u = findUKM_103012400259(L, id);
    if (u == NULL) {
        cout << "UKM tidak ditemukan.\n";
        return;
    }

    if (u == L.first) {
        deleteFirstUKM_103012400259(L, u);
    } else if (u == L.last) {
        deleteLastUKM_103012400259(L, u);
    } else {
        deleteAfterUKM_103012400259(L, u->prev, u);
    }

    cout << "UKM berhasil dihapus!\n";
}

int countUKM_103012400259(uList L) {
    int n = 0;
    addressU p = L.first;
    while (p != NULL) {
        n++;
        p = p->next;
    }
    return n;
}

int countUKMByJenis_103012400259(uList L, string jenis) {
    int n = 0;
    addressU p = L.first;
    while (p != NULL) {
        if (p->info.jenis == jenis) n++;
        p = p->next;
    }
    return n;
}

addressU findUKMByName_103012400259(uList L, string nama) {
    addressU p = L.first;
    while (p != NULL) {
        if (p->info.nama == nama) return p;
        p = p->next;
    }
    return NULL;
}
