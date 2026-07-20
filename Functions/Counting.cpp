#include <bits/stdc++.h>

using namespace std;
void printer(int n){//void type fuction wont return anything
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<endl;
    printer(n);
    return 0;
}