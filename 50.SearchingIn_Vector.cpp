#include<iostream>
using namespace std;

int linearSearch(int v[], int n, int key){

    for(int i = 0; i < n; i++){

        if(key == v[i]){
            return i;
        }

    }

    return -1;
}

int main(){

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int v[n];

    cout << "--- Enter the array elements ---" << endl;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(v, n, key);

    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}