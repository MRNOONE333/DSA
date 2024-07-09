// see cell 21

#include<iostream>
using namespace std;
template<typename T>

class queueUsingArray{
    T * data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;

    public:
    queueUsingArray(int s){
        data = new T [s];
        nextIndex = 0;
        firstIndex =-1 ;
        size = 0;
        capacity=s;
    }

    int getSize(){
        return size;
    }
    
    bool isEmpty(){
        return size == 0;
    }
    
    
    // insert
    void enqueue(T element){
        if (size == capacity)
        {
            // changed
            // cout<<"Queue full !!";
            // return;
            T * newData = new T [2*capacity];
            int j =0;
            for (int i = firstIndex ; i< capacity ; i++){
                newData[j] = data[i];
                j++;
            }
            // j remains  unchanged we reset i = 0,
            for (int i=0; i<firstIndex;i++){
                newData[j]= data [i];
                j++;
            }
            delete [] data;
            data = newData;
            firstIndex =0;
            nextIndex = capacity;
            capacity*=2;

        }
        data[nextIndex] =element;
        nextIndex = (nextIndex+1)% capacity;
        if(firstIndex==-1){
            firstIndex =0;
        }
        size++;
    }


    T front(){
        if(isEmpty()){
            cout<<"queue is empty";
            return 0;
        }
        return data[firstIndex];
    }


    T dequeue(){
    if(isEmpty()){
        cout<<"queue if empty";
        return 0;
    }
    T ans = data[firstIndex];
    firstIndex= (firstIndex+1)%capacity;
    size--;
    if (size==0)
    {
        firstIndex =-1;
        nextIndex=0;
    }
    
    return ans;
    }

};
