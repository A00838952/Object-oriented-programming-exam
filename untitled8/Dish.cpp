//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#include "Dish.h"
Dish::Dish(){
    name="hamburger";
    price=100;
}
Dish::Dish(string name, double price){
    this->name=name;
    this->price=price;
}
void Dish::show(){
    cout<<"Dish: "<<name<<" price: "<<price<<endl;
}