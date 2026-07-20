#include <bits/stdc++.h>

using namespace std;

int main() {
    int amount,N100,N50,N20,N1;
    cout<<"Enter amount: "<<endl;
    cin>>amount;
    switch(1){
        case 1:N100=amount/100;
        amount=amount%100;
         case 2:N50=amount/50;
        amount=amount%50; 
        case 3:N20=amount/20;
        amount=amount%20; 
        case 4:N1=amount/1;
        amount=amount%1;
    }
    cout<<N100<<endl;
    cout<<N50<<endl;
    cout<<N20<<endl;
    cout<<N1<<endl;
    return 0;
}