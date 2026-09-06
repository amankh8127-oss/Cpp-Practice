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
    cout << v.back() << endl;   // return the last element of vector
    cout << v.front() << endl;  // return the first element of vector
    cout << v.empty() << endl;  // return 0 if vector is empty and 1 if vector is not empty 
    cout << v.capacity() << endl;  // return the capacity of vector 
    cout << v.max_size() << endl;  // return the max size of vector
    cout << v.at(2) << endl;    // return the element at index 2
    cout << v.data() << endl;  // return the address of first element of vector
    return 0;
}