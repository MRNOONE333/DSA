// has ssom errors
#include<iostream>
#include<string>
using namespace std;

template <typename V>
class mapNode{
    public:
    string key;
    V value;
    mapNode *next;

    //constructor
    mapNode(string key,V value ){
        this->key=key;
        this->value=value;
        this->next=NULL;
    }

    //resurcive destructor of LL Node called.
    ~mapNode(){
        delete next;
    }
};

template <typename V>
class ourMap{
    mapNode <v>** bucket;
    int count; // ----------------------------------------------------
    int bucketSize;

    public:
    ourMap(){
        count =0; // ----------------------------------------------------
        bucketSize =5;//created an array of size 5
        for(int i=0;i<bucketSize;i++){// make all the values of this array  as NULL, to avoid garbage
            bucket[i]=NULL;
        }
    }

    ~ourMap(){
        for(int i =0;i<bucketSize;i++){
            delete bucket[i]; // resurcive destructor of LL Node called.
        }
        delete [] bucket; // delete entire array.
    }

      int size(){
        return count;
      }
      
      private: // helper function for hashcode.
      int bucketIndexFinderHashFuncionAndCompression(string key){
        int hashCode=0;
        int cofficient=1;
        for (i=key.length - 1;i>=0;i--){
            hashcode+=key[i]*cofficient;
            hashCode=hashCode%bucketSize;// so that it don't goes beyond the int max value.  
            cofficient*=37;
            cofficient=cofficient%bucketSize;// so that it don't goes beyond the int max value.
        }
        return hashCode%bucketSize ;
      };  

      public:
      void insert(string key , V value){
        int bucketIndex = bucketIndexFinderHashFuncionAndCompression(string key); 
        mapNode<V>* head = bucket[bucketIndex];
        while (head!=NULL)
        {
            if(head->key=key){
                head->value=value;
            }
        head=head->next;
        }
        head=bucket[bucketIndex];
        mapNode<V> * node = new mapNode<V>(key,value);
        node->next=head;
        bucket[bucketIndex]=node;
        count++;
      }

      V getValue(string key){
        int bucketIndex = bucketIndexFinderHashFuncionAndCompression(string key); 
        mapNode<V>* head = bucket[bucketIndex];
        while (next!=NULL)
        {
            if(head->key=key){
                return head->value;
            }
            head = head->next;
        }
        return 0;
      }



      V remove(string key){
        int bucketIndex = bucketIndexFinderHashFuncionAndCompression(string key); 
        mapNode<V>* head = bucket[bucketIndex];
        mapNode<V>* prev =NULL;
        while (next!=NULL)
        {
            if(head->key=key){
                if(prev == NULL){// it means theere is no previous , i am removing the head of the LL., so i need to move head->next to nedt node of LL
                    bucket[bucketIndex]=head->next;
                }else{
                    prev->next=head->next;// some middle node of LL is being removed.
                }
            V value = head->value; // storing removed value to be returned
            head->next=NULL; // makiing the next of head as null so that if there is  furthe nodes in LL the don't get deleted as our destructor is recursive.
            delete head;
            count --;
            return value;
            }
            prev=head; // like i am movig my head i need to move  mmy previous alongside.
            head = head->next;
        }
        return 0;
      }
};



int main(){
    ourMap<int> map;

    // Adding values to the map
    map.insert("one", 1);
    map.insert("two", 2);
    map.insert("three", 3);

    // Retrieving values from the map
    cout << "Value for 'one': " << map.getValue("one") << endl;
    cout << "Value for 'two': " << map.getValue("two") << endl;
    cout << "Value for 'three': " << map.getValue("three") << endl;

    // Removing a value from the map
    cout << "Removing 'two': " << map.remove("two") << endl;

    // Checking values after removal
    cout << "Value for 'two' after removal: " << map.getValue("two") << endl;

    return 0;
}