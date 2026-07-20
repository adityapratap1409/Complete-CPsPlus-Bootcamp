#include <iostream>
using namespace std;
int main(){
 int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Counting from 1 to n: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    int i=1;
    for(;;){
        if(i<=n){
             cout<<i<<" ";
        }
        else{
            break;
        }
        i++;
    }
    return 0;
}