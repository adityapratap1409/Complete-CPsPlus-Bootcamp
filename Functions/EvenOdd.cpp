#include <bits/stdc++.h>

using namespace std;
bool Checker(int number){
    if(number&1)
    return 0;
    return 1;
}
int main() {
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(Checker(n))
    cout<<"Number Even"<<endl;
    else
    cout<<"Number Odd"<<endl;
    return 0;
}