#include <iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter a character: ";
    ch=cin.get();
    cout << "\t P" <<ch;
    cout <<"\n";
    cout << "\t ASCII value->";
    int a=ch;
    cout << a;
    cout <<"\n";
    if(ch>='a' && ch<='z'){
        cout << "\t It is a lowercase letter.";
    }
    else if(ch>='A' && ch<='Z'){
        cout << "\t It is an uppercase letter.";
    }
    else if(ch>='0' && ch<='9'){
        cout << "\t It is a digit.";
    }
    else{
        cout << "\t It is a special character.";
    }
    cout <<"\n";
     if(a>=97 && a<=122){
        cout << "\t It is a lowercase letter.";
    }
    else if(a>=65 && a<=90){
        cout << "\t It is an uppercase letter.";
    }
    else if(a>=48 && a<=57){
        cout << "\t It is a digit.";
    }
    else{
        cout << "\t It is a special character.";
    }
    return 0;
}