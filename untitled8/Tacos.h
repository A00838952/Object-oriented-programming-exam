//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#ifndef UNTITLED8_TACOS_H
#define UNTITLED8_TACOS_H
#include "Dish.h"

class Tacos {
public:
    string name;
    double price;
    double number;
    Tacos();
    Tacos(string name, double price, double number);
    void show();
    double getPrice();

};


#endif //UNTITLED8_TACOS_H
