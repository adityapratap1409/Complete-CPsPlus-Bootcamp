#include <iostream>
using namespace std;
int main() {
    int a=10;
    float f=a; //Implicit type casting
    cout << "The value of a that is int type " << a << " and the value of f that is float type " << f << endl;
    float b=1.23789;
    int c=b; //Explicit type casting
    cout << "The value of b that is float type " << b << " and the value of c that is int type " << c << endl;
    char ch=100;
    cout << "The value of ch that is char type " << ch << endl;
    char chlarge=1213124;
    cout << "The value of chlarge that is char type " << chlarge << endl;
    unsigned int a1=1234512;
    cout << "The value of a1 that is unsigned int type " << a1 << endl;
    unsigned int a2=-1234512;
    cout << "The value of a2 that is unsigned int type " << a2 << endl;
    return 0;
}