#include <iostream>
using namespace std;
int main(){
    int i,a,sum=0;
    cout <<"Enter a  number: ";
    cin>>i;
    a=1;
    while(a<=i){
        cout << a << " ";
        a++;
    }
    cout <<"\n";
    cout <<"Enter a  number: ";
    cin>>i;
    a=1;
    while(a<i){
        sum=sum+a;
        a++;
    }
    cout <<"Sum: " << sum << endl;
    return 0;
}
