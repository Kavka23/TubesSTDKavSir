#ifndef UKM_H_INCLUDED
#define UKM_H_INCLUDED

//parent - UKM - DLL
typedef string infotype;
typedef struct elmUKM addressU;

struct elmUKM {
    infotype info;
    addressU next;
    addressU prev;
};

struct mList {
    addressU first;
    addressU last;
};

addressU alokasiUKM_103012400339(string nama);
bool insertMahasiswaToUKM_103012400339(mListUKM &L, string targetUKM, addressM M);
bool deleteMahasiswaFromUKM_103012400339(mListUKM &L, string targetUKM, string NIM);
void printUniqueMahasiswa_103012400339(mListUKM L);
void menuAdmin_103012400339();


#endif // UKM_H_INCLUDED
