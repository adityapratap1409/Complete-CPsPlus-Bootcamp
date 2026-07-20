#include <iostream>
using namespace std;
int main(){
    int i,n,a;
    cout<<"Enter the number of rows: ";
    cin>>n;
    i=1,a=0;
    while(i<=n){
        int j=1;
        while(j<=n){
             char ch='A'+a;
            cout<<ch <<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
}