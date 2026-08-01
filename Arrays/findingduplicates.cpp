#include <bits/stdc++.h>

using namespace std;
void duplifinder(int arr[],int size){
 int ans=0;
 //XORing all
 for(int i=0;i<size;i++){
    ans=ans^arr[i];
 }
 for(int i=1;i<size;i++){
    ans=ans^i;
 }
 cout<<"Duplicate:- "<<ans;
}
int main() {
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    duplifinder(arr, size);
    return 0;
}