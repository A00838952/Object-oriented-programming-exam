#include <iostream>
#include "Hamburger.h"
#include "Pizza.h"
#include "Tacos.h"
using namespace std;

int main() {
    cout<<"Dish        Price        Extras           Final Price"<<endl;
    Tacos taco( "Tacos", 100,3);
    Pizza pizza("Pizza",150,"Square");
    Hamburger hamburger("Hamburger",120,"Regular");
    Tacos taco2( "Tacos", 100,6);
    Pizza pizza2("Pizza",150,"Circle");
    Hamburger hamburger2("Hamburger",120,"Large");

    hamburger.show();
    pizza.show();
    taco.show();
    hamburger2.show();
    pizza2.show();
    taco2.show();
    return 0;
}
