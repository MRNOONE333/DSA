#include<iostream>
#include<vector>
using namespace std;

int main(){
//vector <int> * vectorPointer = new vector <int>();
vector <int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);

for (int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
v[2]= 200; // this won't be dynamic it can only 
           //change the value i.e update and get also , not insert..
cout<<"change v[2]: "<<v[2]<<endl;
v[3]=900;// nochange .
for (int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
cout<< "v at 2: "<< v.at(2)<<endl;
//cout<< "v at 3: "<< v.at(3)<<endl;
//terminate called after throwing an instance of 'std::out_of_range'

cout<< "capacity demonstration: "<<endl;
vector <int> v2;
for(int i=0; i<25; i++){
    v2.push_back(i+1);
    cout<<"capacity: "<<v2.capacity()<<"  "<<"size:"<<v2.size() <<" "<<"data: "<<v2[i]<<endl;
}
}

// this didn't added v[3] - v[3]=900; line 18.
// capacity size difference is clear.

// output
// 10
// 20
// 30
// change v[2]: 200
// 10
// 20
// 200
// v at 2: 200
// capacity demonstration:
// capacity: 1  size:1data: 1
// capacity: 2  size:2data: 2
// capacity: 4  size:3data: 3
// capacity: 4  size:4data: 4
// capacity: 8  size:5data: 5
// capacity: 8  size:6data: 6
// capacity: 8  size:7data: 7
// capacity: 8  size:8data: 8
// capacity: 16  size:9data: 9
// capacity: 16  size:10data: 10
// capacity: 16  size:11data: 11
// capacity: 16  size:12data: 12
// capacity: 16  size:13data: 13
// capacity: 16  size:14data: 14
// capacity: 16  size:15data: 15
// capacity: 16  size:16data: 16
// capacity: 32  size:17data: 17
// capacity: 32  size:18data: 18
// capacity: 32  size:19data: 19
// capacity: 32  size:20data: 20
// capacity: 32  size:21data: 21
// capacity: 32  size:22data: 22
// capacity: 32  size:23data: 23
// capacity: 32  size:24data: 24
// capacity: 32  size:25data: 25