#include<iostream>
using namespace std;
int getSum(int arr[],int n){
    int sum = 0;

    for(int i = 0; i < 5; i++) {
    sum += arr[i];
    }
    return sum;

}

int main() {
    int arr[5] = {2,-7,1,-4,11};
    int result = getSum(arr, 5);
    
    cout << "sum of array elements = " << result << endl;
    return 0;

}