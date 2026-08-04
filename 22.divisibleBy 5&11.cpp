#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the number: ";
    cin >> n;
    if(n%5==0){
        cout << n <<" " << "divisible by 5" << endl;
    }
    else if(n%11==0){
        cout << n << " divisible by 11" << endl;
    }
    else{
        cout << n << " not divisible ";
    }
    return 0;
}