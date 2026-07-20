#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=0;
    float answer=0;
    while(n!=0){
        int bit=n&1;
        answer=answer+bit*pow(10,i);
        n=n>>1;
        i++;
    }
    cout<<"Binary representation is: "<<answer<<endl;
}