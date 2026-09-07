#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> v, int target){
    vector<int> ans;
    int n = v.size();
    int i = 0, j = n-1;
    while(i , j){
        int pairSum = v[i] + v[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {12, 23, 34, 45, 56, 67, 78};
    int target = 90;
    vector<int> result = pairSum(v, target);
    if(result.size() == 2) {

        cout << "The pair indices are: " << result[0] << " , " << result[1] << endl;

        int sum = v[result[0]] + v[result[1]];

        cout << "The sum of the pair is: " << sum << endl;
    }
    else {

        cout << "No pair found" << endl;
    }

    return 0;
}