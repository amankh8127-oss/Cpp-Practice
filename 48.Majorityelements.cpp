//Brute force approach
#include<iostream>
#include<vector>
using namespace std;
vector<int> majorityElement(vector<int> v) {
    vector<int> ans;
    int n = v.size();
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(v[i] == v[j]) {
                count++;
            }
        }
        if(count > n/2) {
            ans.push_back(v[i]);
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int> v = {3, 2, 2, 3, 2, 2, 3};
    vector<int> result = majorityElement(v);
    if(!result.empty()) {
        cout << "The majority element is: " << result[0] << endl;
    }
    else {
        cout << "No majority element found." << endl;
    }
    return 0;
}