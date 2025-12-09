#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

using namespace std;

typedef struct dataUKM infotypeU;
typedef struct elmUKM *addressU;
typedef struct dataMahasiswa infotypeM;
typedef struct elmMahasiswa *addressM;

//parent - UKM - DLL
struct dataUKM {
    string nama;
    string jenis;
    string ID;
};

struct elmUKM {
    infotypeU info;
    addressM firstMhs;
    addressU next;
    addressU prev;
};

struct uList {
    addressU first;
    addressU last;
};

//child - mahasiswa - SLL

struct dataMahasiswa {
    string nama;
    string NIM;
    string Kelas;
};

struct elmMahasiswa {
    infotypeM info;
    addressM next;
};

void createListUKM_103012400259(uList &L);
addressU createElmListUKM_103012400259(string nama, string ID, string jenis);
void insertFirstUKM_103012400259(uList &L, addressU p);
void insertAfterUKM_103012400259(uList &L, addressU prec, addressU p);
void insertLastUKM_103012400259(uList &L, addressU p);
void deleteFirstUKM_103012400259(uList &L, addressU &p);
void deleteAfterUKM_103012400259(uList &L, addressU prec, addressU &p);
void deleteLastUKM_103012400259(uList &L, addressU &p);
addressU findUKM_103012400259(uList L, string ID);
void viewUKM_103012400259(uList L);

addressM createElmListMhs_103012400339(string nama, string NIM, string kelas);
void insertFirstMHS_103012400339(addressU &o, addressM p);
void insertAfterMHS_103012400339(addressU &o, addressM prec, addressM p);
void insertLastMHS_103012400339(addressU &o, addressM p);
void deleteFirstMHS_103012400339(addressU &o, addressM &p);
void deleteAfterMHS_103012400339(addressU &o, addressM prec, addressM &p);
void deleteLastMHS_103012400339(addressU &o, addressM &p);
addressM findMHS_103012400339(addressU o, string nim);
void viewMHS_103012400339(addressU p);
#endif // HEADER_H_INCLUDED
