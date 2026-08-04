#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"enter the value of n: ";
    cin >> n;
    int first = 0, second = 1, next;
    for(int i=0; i<=1; i++){
        if(i==0){
            cout << i <<" ";
        }
        else{
            cout << i <<" ";
        }
    }
    for(int i=2; i<=n; i++){
            next = first+second;
            first = second;
            second = next;
            cout << second<<" ";
    }
    return 0;
}