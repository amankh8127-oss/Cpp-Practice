#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;

    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "--- Enter the vector elements ---" << endl;

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    cout << "--- Reverse vector is ---" << endl;

    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}