#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a: ";
    cin >> a;
    
    int b;
    cout << "Enter b: ";
    cin >> b;
    
    cout << "\n--- Results ---\n"; // Just to separate inputs from outputs

    // Checking 'a'
    if (a > 0){
        cout << "a is positive\n";
    }
    else if (a < 0){
        cout << "a is negative\n";
    }
    else{
        cout << "a is zero\n";
    }
    
    // Checking 'b'
    if (b > 0){
        cout << "b is positive\n";
    }
    else if (b < 0){
        cout << "b is negative\n";
    }
    else{
        cout << "b is zero\n";
    }
    
    // Comparing 'a' and 'b'
    if (a > b){
        cout << "a is greater than b\n";
    }
    else if (a < b){
        cout << "a is less than b\n";
    }
    else{
        cout << "a is equal to b\n";
    }

    return 0;
}
