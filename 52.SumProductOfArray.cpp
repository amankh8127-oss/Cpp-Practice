#include<iostream>
#include<vector>
using namespace std;

void SumAndProduct(vector<int> v){

    int sum = 0;
    int product = 1;

    for(int i = 0; i < v.size(); i++){
        sum += v[i];
        product *= v[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    SumAndProduct(v);

    return 0;
}