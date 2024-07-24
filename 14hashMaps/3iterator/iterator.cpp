#include<iostream>
using namespace std;
#include <unordered_map>
#include<vector>

int main(){
    unordered_map <string, int> map;
    map["abc1"]=1;
    map["abc2"]=2;
    map["abc3"]=3;
    map["abc4"]=4;
    map["abc5"]=5;
    map["abc6"]=6;

    cout<<"unordered iterarors"<<endl;
    unordered_map <string, int>::iterator it=map.begin();
    while (it!=map.end()){
        cout<<"key: "<<it->first<<"value: "<<it->second<<endl;
        it++;
    }

    cout<<"Ordered iterarors"<<endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator it1=v.begin();
    while (it1!=v.end()){
        cout<<*it1<<endl;
        it1++;
    }


    // .at() gives value , we can use find in iterators as well.
    unordered_map <string, int>::iterator newIt=map.find("abc");

    // // it will erase all elements from it before it1+1.
    // v.erase(it1,it1+1);

    // Erase the first element
    it1 = v.begin();
    v.erase(it1, it1 + 1);

    // Print the vector after erase
    vector<int>::iterator it2 = v.begin();
    while (it2 != v.end()) {
        cout << *it2 << endl;
        it2++;
    }


}



//output
// key: abc5value: 5
// key: abc1value: 1
// key: abc2value: 2
// key: abc6value: 6
// key: abc4value: 4
// key: abc3value: 3
// 1
// 2
// 3
// 4
// 5