#include <iostream>
#include <vector>
using namespace std;

void findRepeatedNumbers(const vector<int>& arr) {
    cout << "Repeated numbers in the array are: ";
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;  // Found a repeat, move to the next number
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers separated by space: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findRepeatedNumbers(arr);

    return 0;
}
