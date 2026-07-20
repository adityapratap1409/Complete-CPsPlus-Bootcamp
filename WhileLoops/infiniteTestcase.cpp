#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=1,i,counter=1;
    while(n){
        cout<<"STUCK    "<<counter<<" ";
        counter++;
        i=counter&1;
        if(i)
        cout<<endl;
    }
    return 0;
}