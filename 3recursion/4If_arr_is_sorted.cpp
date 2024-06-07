// cell 14

#include <iostream>
using namespace std;

bool arraySortedOrNot(int arr[] ,int size ){
    
    if (size == 0 || size ==1){
        return true;
    }

    if (arr[0]>arr[1]){
        return false;
    }

    return arraySortedOrNot(arr+1, size-1);
}



int main()
{
    int arr[] = { 20, 20, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}
