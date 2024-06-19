//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#ifndef UNTITLED8_DISH_H
#define UNTITLED8_DISH_H
using namespace std;
#include <iostream>

class Dish {
public:
    string name;
    double price;
    Dish();
    Dish(string name, double price);
    virtual void show();
    virtual double getPrice()=0;
};


#endif //UNTITLED8_DISH_H
