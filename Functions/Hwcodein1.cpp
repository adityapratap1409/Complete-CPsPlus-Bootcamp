#include <bits/stdc++.h>
using namespace std;
int termFinder(int num){
    return((3*num)+7);
}
int setBitfinder(int n1,int n2){
    int count=0;
    while(n1!=0){
        if(n1&1){
            count++;
        }
        n1=n1>>1;
    }
    while(n2!=0){
        if(n2&1){
            count++;
        }
        n2=n2>>1;
    }
    return count;
}
int Fibofinder(int n){
    int a=0,b=1,nextN;
    for(int i=1;i<=n;i++){
        nextN=a+b;
        a=b;
        b=nextN;
    }
    return nextN;
}
int main() {
    int n;
    cout<<"Enter the nth term you want to find in AP 3n+7: ";
    cin>>n;
    cout<<endl;
    cout<<"The "<<n<<" term is: "<<termFinder(n)<<endl;
    int a,b;
    cout<<"Enter number to find their set bits: ";
    cin>>a>>b;
    cout<<"The number of set bits is: "<<setBitfinder(a,b);
    int nfib;
    cout<<endl;
    cout<<"Enter the nth term of Fibonacci series you want to find: ";
    cin>>nfib;
    cout<<endl;
    cout<<"The "<<nfib<<" term is:"<<Fibofinder(nfib);
    return 0;
}