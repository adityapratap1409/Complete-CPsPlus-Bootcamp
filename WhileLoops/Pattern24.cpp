#include <iostream>
using namespace std;
int main (){
    int i,n,space,st;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){    
            cout<<j;
            j++;
        }
        st=i-1;
        while(st){
            cout<<st;
            st--;
        }   
        cout<<endl;
        i++;
    }   
    return 0;
}