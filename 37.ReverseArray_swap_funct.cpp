// two pointer approach
#include<iostream>
using namespace std;
 void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
 }
 int main(){
    int n;
    cout <<"declare the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseArray(arr, n);
    cout << "reverse Array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
 }