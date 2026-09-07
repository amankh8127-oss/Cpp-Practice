//Ques: print the unique element of the vector[1, 2, 3, 2, 3]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1, 2, 3, 2, 3};
    cout << "the unique elements of the vector are: " << endl;
    int key = 0;
    for(int i = 0; i < v.size(); i++){
        key = key^v[i];
    }
    cout << "the unique element is: " << key << endl;
    return 0;
}