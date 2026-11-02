#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        // else if (arr[mid] < key) {
        //     s = mid + 1;
        // }
        // else {
        //     e = mid - 1;
        // }
    }
    return -1;
}
int main() {
    //Elements should be in monotonic order for binary search to work
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = BinarySearch(arr, 10, 3);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } 
    else {    
        cout << "Element not found in the array." << endl;
    }
    return 0;
}