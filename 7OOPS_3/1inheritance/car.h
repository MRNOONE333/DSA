#include"vehicle.h"
#include<iostream>

class car: public vehicle{
    public:
    int numGear;

    
    void print(){
        std::cout<<"numtyre: "<<numTyres<<std::endl;
        std::cout<<"color: "<<color<<std::endl;
        std::cout<<"num gear: "<<numGear<<std::endl;
    }

    void setTyres(int numTyres){
        this->numTyres=numTyres;
    }
};