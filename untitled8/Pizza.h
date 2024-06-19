//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#ifndef UNTITLED8_PIZZA_H
#define UNTITLED8_PIZZA_H
#include "Dish.h"

class Pizza {
    public:
        string name;
        double price;
        string shape;
        Pizza();
        Pizza(string name, double price, string shape);
        void show();
        double getPrice();

};


#endif //UNTITLED8_PIZZA_H
