#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0,a;
    /*cout <<"Enter a  number: ";
    cin>>n;
    i=1;
    while(i<=n){
        if(i%2==0){
            sum=i+sum;
            i++;
        }
        else{
            i++;
        }
    }
    cout <<"Sum of even numbers: " << sum << endl;
    */
    i=2;
    cout <<"Enter a  number: ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout <<"Not prime for " << i << endl;
            break;
        }
        else{
            cout <<"Prime for " << i << endl;
            i++;
            
        } 
    }
     return 0;
}