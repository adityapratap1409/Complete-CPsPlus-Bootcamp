#include <iostream>
using namespace std;
int main (){
    int i,n,a;
    cout<<"Enter a number: ";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        a=i;
        while(j<=i){
            cout<<a<<" ";
            j++;
            a--;
        }
        cout<<endl;
        i++;
    }
    return 0;

}