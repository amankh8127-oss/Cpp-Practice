#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "declare the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }

    }
    cout << "Maximum sum of contiguous subarray is: " << maxSum << endl;
    return 0;
}