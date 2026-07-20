#include <iostream>
using namespace std;
int main(){
 int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of numbers from 1 to n: ";
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<sum;
    return 0;
}