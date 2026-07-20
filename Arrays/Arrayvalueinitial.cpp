#include <bits/stdc++.h>

using namespace std;
void Printer(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arra[10]={0};//Initializing all locations with 0
    Printer(arra,10);
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=1;
    }
    Printer(arr,10);
    int array[10];
    fill_n(array,10,1);
    Printer(array,10);
    return 0;
}