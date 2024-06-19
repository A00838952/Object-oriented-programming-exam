//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#include "Pizza.h"
Pizza::Pizza() {
    name="Pizza";
    price=100;
    shape="Circle";
}
Pizza::Pizza(string name, double price, string shape){
    this->name=name;
    this->price=price;
    this->shape=shape;
}
void Pizza::show(){
    cout<<name<<"          "<<price <<"       "<< shape<<"           "<<getPrice()<<endl;}
double Pizza::getPrice() {
    if (shape=="Square") {
        double newprice = price + 50;
        return newprice;
    }else{
        return price;
    }
}