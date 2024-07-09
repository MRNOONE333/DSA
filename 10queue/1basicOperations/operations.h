#include<iostream>
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
            cout<<"Queue full !!";
            return;
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
