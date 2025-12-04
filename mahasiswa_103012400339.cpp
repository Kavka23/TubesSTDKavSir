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