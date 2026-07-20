#include <bits/stdc++.h>

using namespace std;
bool search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}
int main() {
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    bool found = search(arr, 10, key);
    if (found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}