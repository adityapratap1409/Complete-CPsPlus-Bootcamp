#include <iostream>
using namespace std;
int main(){
   int i,n,j;
    cout <<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<"\n";//cout << endl; This can also be used.
        i++;
    }
    return 0;
}