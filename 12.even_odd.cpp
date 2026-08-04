#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << "Even number: ";
            cout << i << endl;
        }
        else{
            cout << "Odd number: " << i << endl;
        }
    }

    return 0;
}