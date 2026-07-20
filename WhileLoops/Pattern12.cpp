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
        while(j<=n){
            char ch=a+64;
            cout<<ch<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    i=1;
     while(i<=n){
        int j=1;
        while(j<=n){
            char ch=i+j-1+64;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    i=1;
     while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

}