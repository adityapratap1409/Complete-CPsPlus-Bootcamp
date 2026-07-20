#include <iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        int j=i-1;
        while(j){    
            cout<<" ";
            j--;
    }
       j=n-i+1;
        while(j){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }   
    return 0;
}