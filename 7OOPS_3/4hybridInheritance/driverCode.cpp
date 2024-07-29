#include"car.h"
#include"truck.h"
#include<iostream>

class bus:public car, public truck{
    public:
    bus(){
    std::cout<<"bus const"<<std::endl;    
    }    
    ~bus(){
    std::cout<<"bus destructor"<<std::endl;    
    }
    void print(){
        std::cout<<"----print bus----"<<std::endl;    
    }

};

int main(){
    bus b;
    
    //error
    b.car::print();
    std::cout<<"-another print- "<<std::endl;
    b.print();
    std::cout<<"-another print- "<<std::endl;
    b.truck::print();
}
