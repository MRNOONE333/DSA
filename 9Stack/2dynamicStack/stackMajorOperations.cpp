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
        data = new int [4];
        nextIndex = 0;
        capacity=4;
    }

    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex ==0;
    }
    void push(int element){
        if (nextIndex ==capacity){
            int *newData = new int [2*capacity];
            for (int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            delete [] data;
            capacity *=2;
            data =newData; // Point data to the new array - array is deleted but address var int *data; now points to this value. 
            // cout<<"stack full no memory";
            // return ;
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

