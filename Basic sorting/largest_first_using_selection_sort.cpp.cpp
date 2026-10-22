#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void print(const vector<int> &arr) {
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 4, 0};
    print(arr);
    
    int n = arr.size();
    
    // Outer loop moves the boundary of the unsorted subarray backwards
    for (int j = n - 1; j > 0; j--) {
        int maxId = j; // Assume the element at j is the maximum initially
        
        // Find the index of the maximum element in arr[0...j]
        for (int i = j - 1; i >= 0; i--) {
            if (arr[i] > arr[maxId]) {
                maxId = i;
            }
        }
        
        // Swap the found maximum element with the element at position j
        swap(arr[j], arr[maxId]);
    }

    print(arr);
    return 0;
}