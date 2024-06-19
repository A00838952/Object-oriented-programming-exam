//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#include "Hamburger.h"
Hamburger::Hamburger() {
    name="Burger";
    price=100;
    size="Regular";
}
Hamburger::Hamburger(string name, double price, string size){
    this->name=name;
    this->price=price;
    this->size=size;
}
void Hamburger::show(){
    cout<<name<<"      "<<price <<"       "<< size <<"            "<<getPrice()<<endl;
}
double Hamburger::getPrice() {
    if (size=="Large") {
        double newprice = price+50;
        return newprice;
    }else{
        return price;
    }
}