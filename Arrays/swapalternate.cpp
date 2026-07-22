#include <bits/stdc++.h>
using namespace std;
void swapper(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printer(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int evenarr[6] = {1,2,3,4,5,6};
    int oddarr[5] = {1,2,3,4,5};
    printer(evenarr,6);
    swapper(evenarr,6);
    printer(evenarr,6);
    printer(oddarr,5);
    swapper(oddarr,5);
    printer(oddarr,5);
    return 0;
}