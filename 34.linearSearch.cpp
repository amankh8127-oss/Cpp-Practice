#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "declare the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;

    cout << "enter the key element to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++){

        if(key == arr[i]){
            cout << "element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "element not found" << endl;
    }

    return 0;
}