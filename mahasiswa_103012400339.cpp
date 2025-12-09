<<<<<<< HEAD
#include "mahasiswa.h"
#include <iostream>
using namespace std;


void createListMahasiswa_103012400339(mListMhs &L) {
    L.first = NULL;
}


addressM alokasiMahasiswa_103012400339(string nama, string nim, string kelas) {
    addressM P;
    
    P = new elmMahasiswa;
    P->info.nama = nama;
    P->info.NIM = nim;
    P->info.Kelas = kelas;
    P->next = NULL;
    return P;
}


void insertMahasiswa_103012400339(mListMhs &L, addressM P) {
    if (L.first == NULL) 
        L.first = P;
    else {
    P->next = L.first;
    L.first = P;
    }
}


bool deleteMahasiswa_103012400339(mListMhs &L, string NIM) {
    addressM Q;
    addressM prev = NULL;
    
    Q = L.first;
    while (Q != NULL) {
        if (Q->info.NIM == NIM) {
            if (prev == NULL){
                L.first = Q->next;
            }else{
                prev->next = Q->next;
                 }
                delete Q;
                return true;
        }
    prev = Q;
    Q = Q->next;
    }
                return false;
}


addressM searchMahasiswa_103012400339(mListMhs L, string NIM) {
    addressM P;
    P = L.first;

        while (P != NULL) {
            if (P->info.NIM == NIM) {
                return P;

            }
                P = P->next;
        }
    return NULL;
}
=======
#include <iostream>
#include "header.h"
using namespace std;

addressM createElmListMhs_103012400339(string nama, string NIM, string kelas){
    addressM p;
    p = new elmMahasiswa;
    p->info.nama = nama;
    p->info.NIM = NIM;
    p->info.Kelas = kelas;
    p->next = nullptr;
    return p;
};
void insertFirstMHS_103012400339(addressU &o, addressM p){
    if (o->firstMhs == nullptr){
        o->firstMhs = p;
    } else {
        p->next = o->firstMhs;
        o->firstMhs  = p;
    };
};
void insertAfterMHS_103012400339(addressU &o, addressM prec, addressM p){
    if (o->firstMhs == nullptr){
        o->firstMhs = p;
    } else {
        p->next = prec->next;;
        prec->next = p;
    };
};
void insertLastMHS_103012400339(addressU &o, addressM p){
    if (o->firstMhs == nullptr){
        o->firstMhs = p;
    } else {
        addressM curr;
        curr = o->firstMhs;
        while (curr->next != nullptr){
            curr = curr->next;
        };
        curr->next = p;
    };
};
void deleteFirstMHS_103012400339(addressU &o, addressM &p){
    if (o->firstMhs == nullptr){
        p = nullptr;
    } else {
        p = o->firstMhs;
        o->firstMhs = p->next;
        p->next = nullptr;
    };
};
void deleteAfterMHS_103012400339(addressU &o, addressM prec, addressM &p){
    if (o->firstMhs == nullptr || prec == nullptr || prec->next == nullptr){
        p = nullptr;
    } else {
        p->next = prec->next;
        prec->next = p;
    };
};
void deleteLastMHS_103012400339(addressU &o, addressM &p){
    if (o->firstMhs == nullptr){
        o->firstMhs = p;
    } else {
        addressM curr;
        curr = o->firstMhs;
        while (curr->next->next != nullptr){
            curr = curr->next;
        };
        p = curr->next;
        curr->next = nullptr;
    };
};
addressM findMHS_103012400339(addressU o, string nim){
    addressM curr;
    curr = o->firstMhs;
    while (curr != nullptr){
        if (curr->info.NIM == nim){
            return curr;
        };
        curr = curr->next;
    };
    return curr;
}
void viewMHS_103012400339(addressU p){
    addressM currM;
    currM = p->firstMhs;
    cout << "Nama Anggota UKM: ";
    while (currM != nullptr){
        cout << currM->info.nama;
        if (currM->next != nullptr){
            cout << ", ";
        };
        currM = currM->next;
    };
    cout << endl;
};
>>>>>>> e65225da6109abf9c03c2e75d31edb0a35c7d355
