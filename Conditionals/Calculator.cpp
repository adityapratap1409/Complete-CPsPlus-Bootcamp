#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter b: ";
    cin>>b;
    char op;
    cout<<"Enter operation to performed: ";
    cin>>op;
    cout<<endl;
    switch(op){
        case'+': cout<<(a+b);
        break;
        case'-':
        if(a>=b)
        cout<<(a-b);
        else 
        cout<<(b-a);
        break;
        case '*': cout<<(a*b);
        break;
         case '/': cout<<(a/b);
        break; case '%': cout<<(a%b);
        break;
        default: cout<<"Wrong input";
    }
    return 0;
}