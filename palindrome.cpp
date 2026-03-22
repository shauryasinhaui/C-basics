#include<iostream>
using namespace std;
int main() {
    long long num;
    cin >> num;

    int freq[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
    int oddCount = 0;

    for (int i = 0; i < 10; i++){
        if(freq[i] % 2 != 0 ){
           oddCount++;
        }
    }
    if (oddCount <= 1) { 
        cout << "Yes, palindeom can be formed";
    }
    else{
        cout << "No palindrome cannot be formed";
    }
    return 0;
    
}



