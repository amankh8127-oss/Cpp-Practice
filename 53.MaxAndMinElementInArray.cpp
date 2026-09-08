#include<iostream>
#include<vector>
using namespace std;

void MaxAndMin(vector<int>v){
    int max = v[0];
    int min = v[0];
        for(int i = 0; i < v.size(); i++){
            if(min > v[i]){
                min = v[i];
            }
            if(max < v[i]){
                max = v[i];
            }
        }
    cout << "min element are: " << min << endl;
    cout << "max element are: " << max << endl;
}

int main(){
    int n;
    cout << "enter the size of vector: ";
    cin >> n;
    vector<int>v(n);
    cout << "---enter the vector elements---" << " " << endl;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    MaxAndMin(v);

    return 0;
}