#include<iostream>
using namespace std;
int main(){
    cout << ((9>4)||(8<3)) << endl;
    cout << ((9<4)||(8<3)) << endl;
    cout << ((9>4)&&(8<3)) << endl;
    cout << ((9>4)&&(8>3)) << endl;
    cout << !(8>3) << endl;
    cout << !(8<3) << endl;
    return 0;
}