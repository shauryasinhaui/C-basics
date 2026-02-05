#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    while (n != 0) {
       int rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}
