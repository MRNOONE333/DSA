#pragma once
#include<iostream>

class vehicle{
    private: 
        int maxSpeed;

    protected: 
        int numTyres; 

    public: 
        std::string color;
    
    vehicle(){
        std::cout<<"vehicle defaut constructor"<<std::endl;
    }
    vehicle(int z){
        std::cout<<"parameterized vehicle constructor"<<std::endl;
        maxSpeed  = z;
    }
    ~vehicle(){
        std::cout<<"Destructor vehicle"<<std::endl;    
    }
    
    void print(){
        std::cout<<"print vehicle"<<std::endl;    
    }
};
