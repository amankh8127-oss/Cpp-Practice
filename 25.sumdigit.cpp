#include<iostream>
using namespace std;
int main(){
    int n;
    int digitSum = 0;
    cout <<"enter the number: ";
    cin >> n;
    while(n>0){
        int digit = n%10;
        n = n/10;
        digitSum += digit;
    }
    cout <<"Sum of digits: " << digitSum << endl;
    return 0;
}