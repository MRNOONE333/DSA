#include<iostream>
#include"car.h"

int main(){

    car c;
    c.color = "red";
    c.numGear = 3;
    
    // error -  see notes in copy
    //c.numTyres=4;

    c.setTyres(4);

    c.print();

}