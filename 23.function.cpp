#include<iostream>
using namespace std;
void printHello(){
    cout <<"Hello\n";

}
int max(int a, int b){
    if(a>b){
         cout << "max element a: " ;
        return a;
    }
    else{
        cout << "max element b: " ;
        return b;
    }

}
int main(){
    cout << max(10, 20) << endl;
    return 0;
}