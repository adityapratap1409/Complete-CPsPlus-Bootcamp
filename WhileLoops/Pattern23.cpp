#include <iostream>
using namespace std;
int main (){
    int i,n,a;
    cout<<"Enter a number: ";
    cin>>n;
    i=1,a=1;
    while(i<=n){
        int j=n-i;
        while(j){
            cout<<"  ";
            j--;
        }
        j=1;
        while(j<=i){    
            cout<<a<<" ";
            a++;
            j++;
    }
        cout<<endl;
        i++;
    }   
    return 0;
}