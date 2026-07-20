#include <iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}