// i want all of the to  be in  heap.
// see readme cell - 8.
// for array i will have pointers (int*) of all array., lets store them in a sepearte array first.
// for that we use double pointer 



// for costum inputs.
#include<iostream>
using namespace std ;

int main(){
    int m,n;
    cout<<"m,n : ";
    cin>> m>>n;

     int ** p = new int*[10];
     for (int i=0; i<m ; i++){
        p[i]= new int [n];
        for (int j=0; j<n; j++){ 
            cout<<endl<<"give arr: ";
            cin >> p[i][j];
          
        }
     }

     // printing matrix.
         cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

     for(int i = 0; i<m ; i++){
        delete [] p[i];
        
     }
     delete [] p ;  
} 