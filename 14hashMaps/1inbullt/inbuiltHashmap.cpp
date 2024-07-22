using namespace std;
#include<iostream>
#include <unordered_map>
int main(){
    unordered_map<string, int> map;
    pair<string, int> p("abc",2);
    map.insert(p);
    map["def"]=2;
    cout<<map["abc"]<<" "<< map["def"]<<endl;
    cout<<map.at("abc")<<endl;

    // not here it will insert-
    cout<<map["not_there"]<<endl;
    // error
    //cout<<map.at("hahah")<<endl;
    
    
    //no error here
    cout<<map.at("not_there")<<endl; // 0 

    // to check presence.
    if(map.count("not_there") > 0){
        cout<<"not_there present"<<endl;
    }

    cout<<"size: "<<map.size()<<endl;

    /// erase "abc" 
    map.erase("abc");
    if(map.count("abc") > 0){
        cout<<"abc present"<<endl;
    }    

    cout<<"size: "<<map.size();

}