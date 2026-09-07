// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum(vector<int> &arr, int target){
//     vector<int> ans;
//     int n = arr.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;

//             }
//         }

//     }
//     return ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int target = 7;
//     vector<int> result = pairSum(arr, target);
//     cout << result[0] << " " << result[1] << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target) {

    vector<int> ans;

    int n = arr.size();

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {

                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    int target = 7;

    vector<int> result = pairSum(arr, target);

    if(result.size() == 2) {

        cout << "The pair indices are: " << result[0] << " " << result[1] << endl;

        int sum = arr[result[0]] + arr[result[1]];

        cout << "The sum of the pair is: " << sum << endl;
    }
    else {

        cout << "No pair found" << endl;
    }

    return 0;
}