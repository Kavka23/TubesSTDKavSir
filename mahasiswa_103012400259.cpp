#include "mahasiswa.h"
#include <iostream>
using namespace std;

void addParent_1030124000259(mList L, addressM p){
    if (L.first == nullptr) {
        L.first = p;
    } else {
        addressM q;
        q = L.first;
        while (q->next != nullptr){
            q = q->next;
        };
        q->next = p;
    };
};

void deleteParent_103012400259(mList L, string p){
    if (L.first == nullptr) {
        p = nullptr;
    } else {
        addressM q;
        q = L.first;
        while (q->next != nullptr && q->next->info.nama != nullptr != p){
            q = q->next;
        };
        if (q->info){ 
            p = q->next;
            q->next = p->next;
        };
    };
};  

void showParent_103012400259(mList L){
    addressM p = L.first;
    while (p!=nullptr){
        cout << "Nama Mahasiswa: " << p->info.nama << endl;
        cout << "Kelas Mahasiswa: " << p->info.kelas << endl;
        cout << "NIM Mahasiswa : " << p->info.nim << endl;
        cout << "UKM yang diikuti: ";
        
        if (p->firstukm == nullptr){
            cout << "Tidak Ada";
        } else { 
            addressU q;
            q = p->firstukm;
            while (q != nullptr){
                cout << q->info;
                if (q->next != nullptr){
                    cout << ", "
                };
                q = q->next;
            };
        };
        cout << endl << endl;
        p = p->next;
    };
}

void MahasiswaUKMterbanyak_103012400259(mList L){
    addressM mMaks, mSem;
    addressU tempUKM;
    int nMaks, nSem;
    mSem = L.first;
    mMaks = L.first
    nMaks = 0;

    while(mSem != nullptr){
        tempUKM = mSem->firstukm;
        nSem = 0;
        while (tempUKM != nullptr) {
            nSem++;
        }

        if (nSem > nMaks){
            nMaks = nSem;
            mMaks = p;
        };
    };
    cout << "Mahasiswa dengan UKM Terbanyak" << endl;
    cout << "Nama Mahasiswa: " << mMaks->info; << endl;
    cout << "Jumlah UKM: " << nMaks << endl;    
};


