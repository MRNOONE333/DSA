#include"vehicle.h"
#include<iostream>
                
class car: public vehicle{
    public:
    void print(){
        std::cout<<"CAR"<<std::endl;
    }
};