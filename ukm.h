#ifndef UKM_H_INCLUDED
#define UKM_H_INCLUDED

//parent - UKM - DLL
typedef string infotype;
typedef struct elmUKM addressU;

struct elmUKM {
    infotype info;
    addressM next;
    addressM prev;
};

struct mList {
    addressM first;
    addressM last;
};

#endif // UKM_H_INCLUDED
