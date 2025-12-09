#include <iostream>
#include "header.h"

using namespace std;

void createListUKM_103012400259(uList &L){
    L.first = nullptr;
    L.last = nullptr;
};
addressU createElmListUKM_103012400259(string nama, string ID, string jenis){
    addressU p;
    p = new elmUKM;
    p->info.nama = nama;
    p->info.jenis = jenis;
    p->info.ID = ID;
    p->next = nullptr;
    p->prev = nullptr;
    p->firstMhs = nullptr;
    return p;
    };
void insertFirstUKM_103012400259(uList &L, addressU p){
    if (L.first == nullptr && L.last == nullptr){
        L.first = p;
        L.last = p;
    } else {
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    };
};
void insertAfterUKM_103012400259(uList &L, addressU prec, addressU p){
    if (L.first == nullptr && L.last == nullptr){
        L.first = p;
        L.last = p;
    } else if (prec == L.last){
        insertLastUKM_103012400259(L, p);
    } else {
        p->prev = prec;
        p->next = prec->next;
        prec->next->prev = p;
        prec->next = p;
    };
};
void insertLastUKM_103012400259(uList &L, addressU p){
    if (L.first == nullptr && L.last == nullptr){
        L.first = p;
        L.last = p;
    } else {
        L.last->next = p;
        p->prev = L.last;
        L.last = p;
    };
};
void deleteFirstUKM_103012400259(uList &L, addressU &p){
    if (L.first == nullptr && L.last == nullptr){
        p = nullptr;
    } else {
        p = L.first;
        p->next->prev = nullptr;
        L.first = p->next;
        p->next = nullptr;
    };
};
void deleteAfterUKM_103012400259(uList &L, addressU prec, addressU &p){
    if ((L.first == nullptr && L.last == nullptr) || prec == nullptr || prec->next == nullptr){
        p = nullptr;
    } else {
        p = prec->next;
        prec->next = p->next;
        p->next->prev = prec;
        p->next = nullptr;
        p->prev = nullptr;
    };
};
void deleteLastUKM_103012400259(uList &L, addressU &p){
    if (L.first == nullptr && L.last == nullptr){
        p = nullptr;
    } else {
        p = L.last;
        L.last = p->prev;
        L.last->next = nullptr;
        p->prev = nullptr;
    };
};
addressU findUKM_103012400259(uList L, string ID){
    addressU curr;
    curr = L.first;
    while (curr != nullptr){
        if (curr->info.ID == ID) {
            return curr;
        };
        curr = curr->next;
    };
    return nullptr;
};
void viewUKM_103012400259(uList L){
    addressU curr;
    curr = L.first;
    cout << "DATA UKM" << endl;
       while (curr != nullptr){
            cout << "Nama UKM: " << curr->info.nama << endl;
            cout << "ID UKM: " << curr->info.ID << endl;
            cout << "ID Jenis: " << curr->info.jenis<< endl;
            viewMHS_103012400339(curr);
            cout << endl;
        curr = curr->next;
    };
};
