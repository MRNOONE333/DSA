#include"vehicle.h"
#include<iostream>

class truck: virtual public vehicle{
    public:
    truck(){
        std::cout<<"truck constructor"<<std::endl;    
    }    
    ~truck(){
        std::cout<<"Destructor truck "<<std::endl;    
    }
  
};