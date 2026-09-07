#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Declare the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cout << "Enter the target sum: ";
    cin >> target;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            int sum = arr[i] + arr[j];

            if(sum == target) {

                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;

                cout << "Index: " << i << " and " << j << endl;

                cout << "Sum of the pair: " << sum << endl;

                return 0;
            }
        }
    }

    cout << "No pair found with the given sum." << endl;

    return 0;
}