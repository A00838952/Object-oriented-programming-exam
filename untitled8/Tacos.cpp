//
// Created by Rodrigo González de la Garza on 14/06/24.
//

#include "Tacos.h"
Tacos::Tacos() {
    name="Taco";
    price=100;
    number=1;
}
Tacos::Tacos(string name, double price, double number){
    this->name=name;
    this->price=price;
    this->number=number;
}
void Tacos::show(){
    cout<<name<<"          "<<price <<"       "<< number<<" Tacos          "<<getPrice()<<endl;}
double Tacos::getPrice() {
    if (number>1) {
        double newprice = price + 20*number;
        return newprice;
    }else{
        return price;
    }
}