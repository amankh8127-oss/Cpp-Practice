#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "---entr the " << n <<" "<< "array element---" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "---array elments are---\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << endl;
    cout <<"sum of array elements are: "<< sum;

    return 0;
}