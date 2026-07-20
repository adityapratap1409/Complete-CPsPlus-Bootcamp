#include <iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;
     i=n;
    while(i>=0){
        int j=i;
        while(j){
            cout<<"x";
            j--;
        }
        j=n-i;
        while(j){    
            cout<<" ";
            j--;
    }
        cout<<endl;
        i--;
    }
    i=1;
    while(i<=n){
        int j=n-i+1;
        while(j){
            cout<<"x";
            j--;
        }
        j=n+i-1;
        while(j){    
            cout<<" ";
            j--;
    }
        cout<<endl;
        i++;
    }
    return 0;
}