#include <bits/stdc++.h>
using namespace std;
int main() {
    int numero=1;
    char character='a';//When entering 1 here numero uno case is excuted reason is because when entering 1 it translates to raw 1,
    // had i given it in '' it would have turned into ascii value for 1 which afaik is 49 hence executing default case
    // Plain a gives caracter case anything other than this runs default
    switch(character){
        case 'a':
        cout<<"Character case executed"<<endl;
        break;
        case 1:
        cout<<"numero uno case"<<endl;
        break;
        default:
        cout<<"How did we get here?"<<endl;
    }
    while(numero){
    switch(character){
        case 'a':
        cout<<"Character case executed"<<endl;
        switch(numero){
            case 1:cout<<"example of nested switch"<<endl;
            continue;
        }
        break;
        case 1:
        cout<<"numero uno case"<<endl;
        break;
    }
}
    return 0;
}