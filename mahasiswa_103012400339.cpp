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
