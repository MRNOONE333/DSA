using namespace std;
#include <iostream>
#include <vector>

class priorityQueue{
    vector<int> pq;

    public:
    priorityQueue(){

    } 

    bool isEmpty(){
        return pq.size() ==0;
    }
    
    int getSize(){
        return pq.size();
    };
    
    int getMin(){
        if (isEmpty()){
            return 0;
        }
        return pq[0];
    }

    void insert(int element){
        pq.push_back(element);

        int childIndex = pq.size()-1 ;
        
        while (childIndex>0){
        int parentIndex = (childIndex-1)/2;
        if(pq[childIndex]<pq[parentIndex]){
            int temp = pq[childIndex];
            pq[childIndex]= pq[parentIndex];
            pq[parentIndex]= temp;
        }else{
            break;
        }
        childIndex = parentIndex;
        }
    }

    int remove(){
        if (isEmpty()){
            return 0;
        }
        int ans = pq[0];
        pq[0]= pq[pq.size() -1];
        pq.pop_back();

        int parentIndex =0;
        int leftChild =2*parentIndex +1; 
        int rightChild =2*parentIndex +2;
        // finding min index.
        while(leftChild<pq.size()){   //  condition is important, if there is no left child then there is no right child.,, 
        //for right child index is also in the limit there is a check on thata in the condition of-- if( rightChild<pq.size() && pq[rightChild]<pq[minIndex]){
            // left child and right child are left child index and right child index
            int minIndex = parentIndex;
            if(pq[minIndex]>pq[leftChild]){
                minIndex = leftChild;
            }
            if( rightChild<pq.size() && pq[rightChild]<pq[minIndex]){
                minIndex = rightChild;
            }
            int temp = pq[minIndex];
            pq[minIndex]=pq[parentIndex];
            pq[parentIndex]= temp;
            
            if(minIndex==parentIndex){// checks all the required swapping is done.
                break;
            }

            // first swap done.
            //update parent child indexes.
            parentIndex = minIndex;
            leftChild =2*parentIndex +1; 
            rightChild =2*parentIndex +2;

        } 

        return ans;
    }


};
