#include<iostream>
using namespace std;
int DecimalToBinary(int n){
    int binary = 0;
    int place = 1;
    while(n>0){
        int rem = n%2;
        binary += rem*place;
        n = n/2;
        place *= 10;
    }
    return binary;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "binary of " << n << " is = " << DecimalToBinary(n) << endl;
    return 0;
}