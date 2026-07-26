#include <bits/stdc++.h>

using namespace std;
void finduniqueoccurences(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main() {
    int arr[10]={1,2,3,1,3,3,2,1,1};
    finduniqueoccurences(arr,10);
    return 0;
}