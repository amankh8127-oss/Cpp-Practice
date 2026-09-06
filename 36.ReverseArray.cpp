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
    cout << "reverse of the array is : ";
    for(int i = n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}