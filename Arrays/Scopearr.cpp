#include <bits/stdc++.h>

using namespace std;
void printer(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void update(int arr[],int n){
    arr[0]=19302143;
     cout << "After updating the array: ";
    printer(arr, 3);
}
    
int main() {
    int arr[3] = {1, 2, 3};
    cout << "Before updating the array: ";
    printer(arr, 3);
    update(arr, 3);
    cout << "After updating the array in main: ";
    printer(arr, 3);
    return 0;
}