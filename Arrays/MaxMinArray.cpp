#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[],int size){
    int max1=INT_MIN;
    int maxi=INT_MIN; 
    for(int i=0;i<size;i++){
        for(int i=0;i<size;i++){
            maxi=max(maxi,arr[i]);//Predefined functions
            /*if(arr[i]>max1){
                max1=arr[i];
            }*/
        }
    }
    return maxi;
}
int getMin(int arr[],int size){
    int min1=INT_MAX;
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        for(int i=0;i<size;i++){
            mini=min(mini,arr[i]);
            /*if(arr[i]<min1){
                min1=arr[i];
            }*/
        }
    }
    return mini;
}
int main() {
    int arraysize,array[10000];
    cout<<"Enter size of array: ";
    cin>>arraysize;
    cout<<endl;
    cout<<"Enter values of the array: ";
    //Taking array input
    for(int i=0;i<arraysize;i++){
        cin>>array[i];
    }
    cout<<"Maximum value: "<<getMax(array,arraysize)<<endl;
    cout<<"Minimum value: "<<getMin(array,arraysize)<<endl;
    return 0;
}