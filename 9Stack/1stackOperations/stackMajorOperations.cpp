#include <climits>
using namespace std;
#include <iostream>

class stackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
    stackUsingArray(int totalSize){
        //array
        data = new int [totalSize];
        nextIndex = 0;
        totalSize =capacity;
    }

    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex ==0;
    }
    void push(int element){
        if (nextIndex ==capacity){
            cout<<"stack full no memory";
            return ;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout<<"stack empty..";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout<<"stack empty..";
            return INT_MIN;
        }
        return data[nextIndex -1];
    }

};

