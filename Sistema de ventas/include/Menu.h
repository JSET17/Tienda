#ifndef MENU_H
#define MENU_H

#include<iostream>

using namespace std;

class Menu {
public:
    Menu();
    virtual ~Menu();

    void menu();

protected:

private:
    int opc;

};

#endif // MENU_H
