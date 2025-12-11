#include <iostream>
#include "header.h"
using namespace std;

int main() {
    uList L;
    createListUKM_103012400259(L);

    int option = -1;

    while (option != 0) {
        system("cls");
        cout << "============ MENU ============ \n";
        cout << "|| 1. Menu Admin (UKM + Mahasiswa)  ||\n";
        cout << "|| 2. Study Case                    ||\n";
        cout << "|| 0. Exit                          ||\n";
        cout << "=====================================\n";
        cout << "Choose your option : ";
        cin >> option;

        switch(option) {

        case 1:
            cout << "\n=== MENU ADMIN ===\n";
            menuAdmin_103012400339(L);
            break;

        case 2:
            cout << "\n=== STUDY CASE ===\n";
            menuStudiKasus_103012400259(L);
            break;

        case 0:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
            exit(1);
        }
    }

    return 0;
}
