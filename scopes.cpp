#include<iostream>
using namespace std;
void update(int arr[], int n) { 
    cout << endl << "inside the function" << endl;
    //updating the first array in the main function
    arr[0] = 120;
    //printing the array
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
    cout << "going back to main function" << endl;

}
int main() {
    int arr[3] = {1,2,3};
    update (arr,3);

    cout << "printing in the main function" << endl;
    for (int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}