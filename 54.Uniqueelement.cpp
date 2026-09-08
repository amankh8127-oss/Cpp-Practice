#include<iostream>
#include<vector>
using namespace std;
void Unique(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans^arr[i];
    }
    cout << "the unique element are: " << ans << endl;
    
}

int main(){
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "---enter the array elements---" << " " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Unique(arr, n);
    
    return 0;
}