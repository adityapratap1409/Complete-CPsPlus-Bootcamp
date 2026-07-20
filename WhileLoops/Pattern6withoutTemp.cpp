#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << ((i - 1) * i / 2 + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}