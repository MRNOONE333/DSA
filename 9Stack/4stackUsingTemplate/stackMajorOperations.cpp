#include <climits>
using namespace std;
#include <iostream>
// #include "template.cpp"
template <typename T>

class stackUsingArray{
    T *data;
    int nextIndex;
    int capacity;

    public:
    stackUsingArray(T totalSize){
        //array
        data = new T [totalSize];
        nextIndex = 0;
        totalSize =capacity;
    }

    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex ==0;
    }
    void push(T element){
        if (nextIndex ==capacity){
            cout<<"stack full no memory";
            return ;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    T pop(){
        if(isEmpty()){
            cout<<"stack empty..";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top(){
        if(isEmpty()){
            cout<<"stack empty..";
            return 0;
        }
        return data[nextIndex -1];
    }

};

