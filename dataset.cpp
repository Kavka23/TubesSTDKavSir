#include <iostream>
#include "header.h"

using namespace std;

void initData(uList &L) {
    addressU u1, u2, u3, u4, u5;
    addressM m;

    // ====== DATA UKM ======
    u1 = createElmListUKM_103012400259("Basket", "UKM01", "Olahraga");
    u2 = createElmListUKM_103012400259("Futsal", "UKM02", "Olahraga");
    u3 = createElmListUKM_103012400259("PaduanSuara", "UKM03", "Seni");
    u4 = createElmListUKM_103012400259("Teater", "UKM04", "Seni");
    u5 = createElmListUKM_103012400259("Cyber", "UKM05", "Teknologi");

    insertLastUKM_103012400259(L, u1);
    insertLastUKM_103012400259(L, u2);
    insertLastUKM_103012400259(L, u3);
    insertLastUKM_103012400259(L, u4);
    insertLastUKM_103012400259(L, u5);

    // ====== MAHASISWA UKM BASKET ======
    m = createElmListMhs_103012400339("Andi", "13001", "IF-45-01");
    insertLastMHS_103012400339(u1, m);

    m = createElmListMhs_103012400339("Budi", "13002", "IF-45-02");
    insertLastMHS_103012400339(u1, m);

    m = createElmListMhs_103012400339("Cahyo", "13003", "IF-45-03");
    insertLastMHS_103012400339(u1, m);

    // ====== MAHASISWA UKM FUTSAL ======
    m = createElmListMhs_103012400339("Deni", "13004", "IF-45-01");
    insertLastMHS_103012400339(u2, m);

    m = createElmListMhs_103012400339("Eko", "13005", "IF-45-02");
    insertLastMHS_103012400339(u2, m);

    m = createElmListMhs_103012400339("Farhan", "13006", "IF-45-03");
    insertLastMHS_103012400339(u2, m);

    // ====== MAHASISWA UKM PADUAN SUARA ======
    m = createElmListMhs_103012400339("Gita", "13007", "IF-45-01");
    insertLastMHS_103012400339(u3, m);

    m = createElmListMhs_103012400339("Hana", "13008", "IF-45-02");
    insertLastMHS_103012400339(u3, m);

    // ====== MAHASISWA UKM TEATER ======
    m = createElmListMhs_103012400339("Irfan", "13009", "IF-45-03");
    insertLastMHS_103012400339(u4, m);

    m = createElmListMhs_103012400339("Jihan", "13010", "IF-45-01");
    insertLastMHS_103012400339(u4, m);

    m = createElmListMhs_103012400339("Kevin", "13011", "IF-45-02");
    insertLastMHS_103012400339(u4, m);

    // ====== MAHASISWA UKM CYBER ======
    m = createElmListMhs_103012400339("Lutfi", "13012", "IF-45-03");
    insertLastMHS_103012400339(u5, m);

    m = createElmListMhs_103012400339("Maya", "13013", "IF-45-01");
    insertLastMHS_103012400339(u5, m);

    m = createElmListMhs_103012400339("Nanda", "13014", "IF-45-02");
    insertLastMHS_103012400339(u5, m);

    m = createElmListMhs_103012400339("Oki", "13015", "IF-45-03");
    insertLastMHS_103012400339(u5, m);
}
