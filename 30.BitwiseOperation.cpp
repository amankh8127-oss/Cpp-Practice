#include<iostream>
using namespace std;
int main(){
    int a = 4, b = 8;
    // bitwise AND, OR, XOR operations
    cout << "(a&b) = " << (a&b) << endl;
    cout << "(a|b) = " << (a|b) << endl;
    cout << "(a^b) = " << (a^b) << endl;
    // bitwise left shift operation
    cout << "(4<<1) = " << (4<<1) << endl;
    cout << "(10<<2) = " << (10<<2) << endl;
    // bitwise right shift operation
    cout << "(4>>1) = " << (4>>1) << endl;
    return 0;
}