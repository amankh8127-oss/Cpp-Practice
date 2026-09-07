#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>v) {

    int candidate = 0;
    int count = 0;

    for(int i = 0; i < v.size(); i++) {

        if(count == 0) {
            candidate = v[i];
        }

        if(v[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    return candidate;
}

int main() {

    vector<int> v = {2, 2, 1, 1, 1, 2, 2};

    int ans = majorityElement(v);

    cout << "Majority element is: " << ans << endl;

    return 0;
}