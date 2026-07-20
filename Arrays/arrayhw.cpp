#include <bits/stdc++.h>

using namespace std;
int sumArr(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[1000],n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"The sum of the array elements is: "<<sumArr(arr, n)<<endl;
    return 0;
}