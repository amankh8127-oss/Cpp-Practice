#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>v;
    int n;
    cout << "declare the size of vector: ";
    cin >> n;
    char vector[n];
    cout << "enter the vector elements: ";
    for(int i = 0; i < n; i++){
        cin >> vector[i];

    }
    cout << "the vector elements are: " << endl;
    for(int i = 0; i < n; i++){
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << "reverse of the vector is: " << endl;
    for(int i = n-1; i >=0; i--){
        cout << vector[i] << " ";
    }
    cout << endl;
    return 0;
}