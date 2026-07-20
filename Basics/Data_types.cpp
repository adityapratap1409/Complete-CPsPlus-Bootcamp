#include <iostream>
using namespace std;
int main() {  
    int a=345;
    char b='a';
    float f=1.233;
    double d=1.2334342345;
    bool bol=true;
    int size=sizeof(a);
    int size1=sizeof(b);
    int size2=sizeof(f);    
    int size3=sizeof(d);
    int size4=sizeof(bol);
    cout << "A is " << a << " and its size is " << size << " bytes" << endl;
    cout << "B is " << b << " and its size is " << size1 << " byte" << endl;
    cout << "F is " << f << " and its size is " << size2 << " bytes" << endl;
    cout << "D is " << d << " and its size is " << size3 << " bytes" << endl;
    cout << "Bol is " << bol << " and its size is " << size4 << " bit" << endl;
    return 0;
}  