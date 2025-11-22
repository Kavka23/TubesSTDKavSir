#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

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
    addressM next;
};

struct mList {
    addressM first;
};
#endif // MAHASISWA_H_INCLUDED
