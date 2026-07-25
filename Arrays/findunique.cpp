#include <bits/stdc++.h>

using namespace std;
int uniquefinder(int arr[],int size){
int ans=0;
for(int i=0;i<size;i++){
    ans=ans^arr[i];
}
return ans;
}
int main() {
    int arr[10]={11,23,23,2,5,11,23,11,23,11},n=10;
    cout<<"Unique element is: "<<uniquefinder(arr,n)<<endl;
    return 0;
}