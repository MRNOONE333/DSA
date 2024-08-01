// friend class/function don't have this keyword.
#include <iostream>

class Bus{
    public:
    void print(); //  friend function only declare dont define
};

class truck {
    private:
    int x;
    protected:
    int y;
    
    public:
    int z;

    friend void Bus :: print(); //  friend function only declare dont define
    friend void test(); // for global function trying to access private / protected data of truck.
    friend class Bus;  //  in case  there are muliple function in bus trying to access private / protected data of truck.
};

void Bus :: print(){
    truck t ;
    t.x = 4;
    t.y = 5;

    std::cout<< t.x << "   "<<t.y<< std::endl ;

}

//global function.
void test(){
    truck t ;
    t.x = 4;
    t.y = 5;

    std::cout<<"test: "<< t.x << "   "<<t.y<< std::endl ;
}

int main(){
    Bus b;
    b.print();
    test();

};