#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(int arr[], int size) {
    int counts[100]; // Array to store frequency of each element
    int countSize = 0;
    // Step 1: Find frequency of each unique element
    for (int i = 0; i < size; i++) {
        // Check if arr[i] was already counted earlier
        bool alreadyCounted = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }
        // If it's a new element, count its occurrences
        if (!alreadyCounted) {
            int currentCount = 0;
            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j]) {
                    currentCount++;
                }
            }
            // Store the count in our counts array
            counts[countSize] = currentCount;
            countSize++;
        }
    }
    // Step 2: Check if any count appears more than once
    for (int i = 0; i < countSize; i++) {
        for (int j = i + 1; j < countSize; j++) {
            if (counts[i] == counts[j]) {
                return false; // Found duplicate counts!
            }
        }
    }
    return true; // All counts are unique
}
int main() {
    int arr[12] = {4, 2, 7, 2, 4, 9, 4, 1, 7, 4, 9, 3};

    if (uniqueOccurrences(arr, 12)) {
        cout << "True: Frequencies are unique!";
    } else {
        cout << "False: Some numbers appear the same number of times.";
    }

    return 0;
}