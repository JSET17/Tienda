#include "Menu.h"

Menu::Menu() {}

Menu::~Menu() {}

void Menu::menu() {
    do {
        system("cls");
        printf("-----Tienda-----\n\n");
        printf("1. Vender.\n");
        printf("2. Clientes.\n");
        printf("3. Productos.\n");
        printf("4. Cerrar.\n\n");

        printf("Elige una opcion: ");
        cin>>opc;

        switch(opc) {
            case 1:
                system("cls");
                printf("\nEn desarrollo.\n\n");
                system("pause");
                break;
            case 2:
                system("cls");
                printf("\nEn desarrollo.\n\n");
                system("pause");
                break;
            case 3:
                system("cls");
                printf("\nEn desarrollo.\n\n");
                system("pause");
                break;
            case 4:
                system("cls");
                printf("\nCerrando.....\n\n");
                system("pause");
                break;
            default:
                system("cls");
                printf("\nError: Opcion invalida.\n\n");
                system("pause");
                break;
        }
    } while(opc != 4);
}
