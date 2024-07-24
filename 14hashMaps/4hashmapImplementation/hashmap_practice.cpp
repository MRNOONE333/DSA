#include<iostream>
#include<string>
using namespace std;

template <typename V>
class mapNode {
public:
    string key;
    V value;
    mapNode* next;

    // Constructor
    mapNode(string key, V value) {
        this->key = key;
        this->value = value;
        this->next = NULL;
    }

    // Recursive destructor of LL Node called.
    ~mapNode() {
        delete next;
    }
};

template <typename V>
class ourMap {
    mapNode<V>** bucket;
    int count;
    int bucketSize;

public:
    ourMap() {
        count = 0;
        bucketSize = 5; // Created an array of size 5
        bucket = new mapNode<V>*[bucketSize];
        for (int i = 0; i < bucketSize; i++) { // Make all the values of this array as NULL, to avoid garbage
            bucket[i] = NULL;
        }
    }

    ~ourMap() {
        for (int i = 0; i < bucketSize; i++) {
            delete bucket[i]; // Recursive destructor of LL Node called.
        }
        delete[] bucket; // Delete the entire array.
    }

    int size() {
        return count;
    }

private: // Helper function for hash code.
    int bucketIndexFinderHashFuncionAndCompression(string key) {
        int hashCode = 0;
        int coefficient = 1;
        for (int i = key.length() - 1; i >= 0; i--) {
            hashCode += key[i] * coefficient;
            hashCode = hashCode % bucketSize; // So that it doesn't go beyond the int max value.  
            coefficient *= 37;
            coefficient = coefficient % bucketSize; // So that it doesn't go beyond the int max value.
        }
        return hashCode % bucketSize;
    }

public:
    void insert(string key, V value) {
        int bucketIndex = bucketIndexFinderHashFuncionAndCompression(key);
        mapNode<V>* head = bucket[bucketIndex];
        while (head != NULL) {
            if (head->key == key) {
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = bucket[bucketIndex];
        mapNode<V>* node = new mapNode<V>(key, value);
        node->next = head;
        bucket[bucketIndex] = node;
        count++;
    }

    V getValue(string key) {
        int bucketIndex = bucketIndexFinderHashFuncionAndCompression(key);
        mapNode<V>* head = bucket[bucketIndex];
        while (head != NULL) {
            if (head->key == key) {
                return head->value;
            }
            head = head->next;
        }
        return 0; // Assuming V is an int or similar type that can be compared to 0
    }

    V remove(string key) {
        int bucketIndex = bucketIndexFinderHashFuncionAndCompression(key);
        mapNode<V>* head = bucket[bucketIndex];
        mapNode<V>* prev = NULL;
        while (head != NULL) {
            if (head->key == key) {
                if (prev == NULL) { // No previous, removing the head of the LL
                    bucket[bucketIndex] = head->next;
                } else {
                    prev->next = head->next; // Some middle node of LL is being removed.
                }
                V value = head->value; // Storing removed value to be returned
                head->next = NULL; // Making the next of head as null so further nodes don't get deleted
                delete head;
                count--;
                return value;
            }
            prev = head; // Move previous alongside the head
            head = head->next;
        }
        return 0; // Assuming V is an int or similar type that can be compared to 0
    }
};

int main() {
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


//output
// Value for 'one': 1
// Value for 'two': 2    
// Value for 'three': 3  
// Removing 'two': 2     
// Value for 'two' after removal: 0