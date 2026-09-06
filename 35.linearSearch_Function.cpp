#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "declare the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "enter the key element to search: ";
    cin >> key;
    int result = linearSearch(arr, n, key);
    if(result != -1){
        cout << "element found at index: " << result << endl;
    } else{
        cout << "element not found" << endl;
    }
    return 0;
}
