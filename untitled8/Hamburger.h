//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#ifndef UNTITLED8_HAMBURGER_H
#define UNTITLED8_HAMBURGER_H
#include "Dish.h"

class Hamburger {
public:
    string name;
    double price;
    string size;
    Hamburger();
    Hamburger(string name, double price, string size);
    void show();
    double getPrice();
};


#endif //UNTITLED8_HAMBURGER_H
