#include <iostream>
#include"vehicle.h"
#include"car.h"

int main(){
    vehicle v;
    car c;

    v.print();
    c.print();

    vehicle * v1 = new vehicle;
    vehicle * v2;

    v2=&c;
    v1->print();
    v2->print();  // run time polymorphism.
}