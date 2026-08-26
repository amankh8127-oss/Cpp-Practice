#include<iostream>
using namespace std;
 
int BinaryTodecimal(int n){
    int decimal = 0;
    int place = 1;
    while(n>0){
        int rem = n%10;
        decimal += rem*place;
        n = n/10;
        place *= 2;
    }
    return decimal;
}
int main(){
    int n;
    cout << "enter the binary number: ";
    cin >> n;
    cout << "decimal of " << n << " is = " << BinaryTodecimal(n) << endl;
    return 0;
}