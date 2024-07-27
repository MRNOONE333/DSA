#include"vehicle.h"
#include<iostream>


class car: public vehicle{
    public:
    int numGear;

    car() : vehicle(5){
        std::cout<<"car defaut constructor"<<std::endl;
    }
    ~car(){
        std::cout<<"Destructor car"<<std::endl;
    }

    void print(){
        std::cout<<"numtyre: "<<numTyres<<std::endl;
        std::cout<<"color: "<<color<<std::endl;
        std::cout<<"num gear: "<<numGear<<std::endl;
    }

    void setTyres(int numTyres){
        this->numTyres=numTyres;
    }
};