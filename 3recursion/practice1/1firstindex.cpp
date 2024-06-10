// Coding Problem
// Problem Statement: First Index
// Problem Level: EASY
// Problem Description:
// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// first index or -1

// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 1



#include <iostream>
using namespace std;

int firstIndex(int arr[], int n, int x) {
    if (n == 0) {
        return -1;
    }
    if (arr[0] == x) {
        return 0;
    }
    // crazy.
    int smallOutput = firstIndex(arr + 1, n - 1, x);
    if (smallOutput == -1) {
        return -1;
    }
    return smallOutput + 1;
}

int main() {
    int arr[] = { 20, 20, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 23;
    cout << firstIndex(arr, n, x) << endl;
    return 0;
}





