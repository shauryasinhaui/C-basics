#include <iostream>
#include <vector>
using namespace std;

int findTheDuplicate(vector<int>& arr) {
    int ans = 0;

    // XOR all elements
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // XOR numbers from 1 to n-1
    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 2};
    cout << "Duplicate: " << findTheDuplicate(arr);
}