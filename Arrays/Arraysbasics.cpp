#include <bits/stdc++.h>

using namespace std;
void Printer(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<"   ";
    }
    cout<<endl;
}
int main() {
    int n=10;
    cout<<endl;
    int Userchoice;
    cout<<"Enter 1 for random array and 0 for user specific array: ";
    cin>>Userchoice;
    int array[n];
    if(Userchoice){
        for(int i=0;i<n;i++){
            array[i]=rand();
        }
    }
    else{
        cout<<"Get ready to enter array values"<<endl;
         for(int i=0;i<n;i++){
            cin>>array[i];
         }
    }
    cout<<"Array Output"<<endl;
    Printer(array,n);
    return 0;
}