#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout << "size of vector is : " << v.size() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "size of vector is : " << v.size() << endl;
    cout << "the vector elements are " << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    cout << "size of vector is: " << v.size() << endl;
    return 0;
}