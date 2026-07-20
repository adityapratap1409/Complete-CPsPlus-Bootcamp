#include <iostream>
using namespace std;
int main(){
    int i,n,a;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            a=n-j+1;
            cout<<a<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}