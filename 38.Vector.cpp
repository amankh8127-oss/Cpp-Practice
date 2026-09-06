//STL Vetor = standard template library vector
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     vector<int>v = {1, 2, 3, 4, 5};
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5, 1);
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout << "declare the size of vector: ";
    cin >> n;
    int vector[n];
    cout << "enter the vector elements: ";
    for(int i = 0; i < n; i++){
        cin >> vector[i];

    }
    cout << "the vector elements are: " << endl;
    for(int i = 0; i < n; i++){
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << "reverse of the vector is: " << endl;
    for(int i = n-1; i >=0; i--){
        cout << vector[i] << " ";
    }
    cout << endl;
    return 0;
}