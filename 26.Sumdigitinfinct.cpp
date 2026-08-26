#include<iostream>
using namespace std;
int sumOfDigits(int n){
    int digitsum = 0;
    while(n>0){
        int digit = n%10;
        n = n/10;
        digitsum += digit;
    }
    return digitsum;
}
int main(){
    cout << "sum of digits = " << sumOfDigits(123456789) << endl;
    cout << "Sum of digits = " << sumOfDigits(789) << endl;

    return 0;
}