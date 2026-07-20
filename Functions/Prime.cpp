#include <bits/stdc++.h>

using namespace std;
bool PrimeChecker(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main() {
    int n;
    cout<<"Enter number to check: ";
    cin>>n;
    cout<<endl;
    if(PrimeChecker(n)){
        cout<<n<<" is Prime";
    }
    else{
        cout<<n<<" is NOT Prime";
    }
    return 0;
}