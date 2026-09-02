#include<iostream>
using namespace std;
int main(){
    int num[5] = {5, 2, 9, 1, 6};
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i < 5; i++){
        if(num[i] > largest){
            largest = num[i];
        }
        if(num[i] < smallest){
            smallest = num[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}