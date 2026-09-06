#include<iostream>
#include<climits>
#include<algorithm>
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
    cout << "Index of largest: " << (find(num, num + 5, largest) - num) << endl;
    cout << "Index of smallest: " << (find(num, num + 5, smallest) - num) << endl;

    return 0;
}