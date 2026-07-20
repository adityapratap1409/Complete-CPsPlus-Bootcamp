#include <iostream>
using namespace std;
int main(){
    int a=5;
    cout<<++a<<endl;//6 i=6
    cout<<a++<<endl;//6 i=7
    cout<<a<<endl;//7
    cout<<--a<<endl;//6 i=6
    cout<<a--<<endl;//6 i=5
    cout<<a<<endl;//5
    a=10;
    int b=1;
    if(++a){//because here 11 is non zero therefore condition is taken as to be true
        cout<<b;
    }
    else{
        cout<<++b;
    }
    cout<<endl;
    a=1,b=2;
    if(a++>0 && ++b>2){
        cout<<"Inside if";
    }
    else{
        cout<<"Inside else";
    }
    cout<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}