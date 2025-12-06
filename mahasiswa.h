#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include "ukm.h"

using namespace std;

//child - mahasiswa - SLL
typedef struct dataMahasiswa infotype;
typedef struct elmMahasiswa addressM;
struct dataMahasiswa {
    string nama;
    string NIM;
    string Kelas;
};

struct elmMahasiswa {
    infotype info;
    addressM next.;
    addressU firstukm; 
};

struct mList {
    addressM first;
};

void createListMahasiswa_103012400339(mListMhs &L);
addressM alokasiMahasiswa_103012400339(string nama, string nim, string kelas);
void insertMahasiswa_103012400339(mListMhs &L, addressM P);
bool deleteMahasiswa_103012400339(mListMhs &L, string NIM);
addressM searchMahasiswa_103012400339(mListMhs L, string NIM);
void addParent_1030124000259(mList L, addressM p);
void deleteParent_103012400259(mList L, string p);
void showParent_103012400259(mList L);
void MahasiswaUKMterbanyak_103012400259(mList L);

#endif // MAHASISWA_H_INCLUDED
