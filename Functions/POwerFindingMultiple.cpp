#include <bits/stdc++.h>

using namespace std;
int power(int num1, int num2){
    int answer=1;
    for(int i=1;i<=num2;i++){
        answer=answer*num1;
    }
    return answer;
}

int main() {
    int a,b;
     cout<<"Enter a and b: ";
    cin>>a>>b;
    int answer=power(a,b);
    cout<<endl;
    cout<<"Answer: "<<answer;
     cout<<"Enter a and b: ";
    cin>>a>>b;
    int answer=power(a,b);
    cout<<endl;
    cout<<"Answer: "<<answer; 
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int answer=power(a,b);
    cout<<endl;
    cout<<"Answer: "<<answer; 
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int answer=power(a,b);
    cout<<endl;
    cout<<"Answer: "<<answer;
    return 0;
} 
