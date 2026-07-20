#include <iostream>
using namespace std;
int main (){
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}