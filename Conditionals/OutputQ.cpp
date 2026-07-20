#include <iostream>
using namespace std;
int main() {
    int a1=2;   //Initalizes a as 2
    int b=a1+1;   //Initalizes b as a+1 which results in b being 3 here
    if ((a1=3)==b)//Makes a=3 and checks the condition
     {
           cout <<a1 ;
    } 
    else {
        cout <<a1+1;
    }
    cout<<endl;
    int a2=9;
    if(a2==9){
        cout<<"NINEY";
       }
       if(a2>0){
        cout<<"POSITIVE";
       }
    else {
        cout<<"NEGATIVE";
    }
    cout<<endl;
     int a3=24;
     if(a3>20){
        cout<<"Love";
     }   
     else if (a3==24){
        cout<< "Lovely";
     }
     else {
        cout<<"Babbar";
     }
     cout <<a3;

    return 0;
}