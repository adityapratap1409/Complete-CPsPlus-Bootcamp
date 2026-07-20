#include <bits/stdc++.h>

using namespace std;
int factor(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int numer,denomer,answer;
    numer=factor(n);
    denomer=factor(r)*factor(n-r);
    answer=numer/denomer;
    return answer;
}
void printer(int n){
    cout<<"The answer is: "<<n;
    cout<<endl;
}
int main() {
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter r: ";
    cin>>r;
    cout<<endl;
    int answer=nCr(n,r);
    printer(answer);
    return 0;
}