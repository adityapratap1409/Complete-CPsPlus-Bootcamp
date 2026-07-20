#include <iostream>
using namespace std;
 int main() {
    int a=10;
    int b=20;
    double b2=20.0;
    int sum=a+b;
    int diff=a-b;       
    int product=a*b;
    int quotient=a/b;
    double quotient2=a/b2; 
    //This will give the result as 0 because both a and b are integers.To get the correct result, we can either make a or b a double or use static_cast<double>(a)/b.
    int modulus=a%b;
    bool isEqual=a==b;
    bool isNotEqual=a!=b;
    bool isGreater=a>b;
    bool isLess=a<b;
    bool isGreaterOrEqual=a>=b;
    bool isLessOrEqual=a<=b;
    bool isEqualandandGreater=(a==b) && (a>b);
    bool isEqualorGreater=(a==b) || (a>b);
    bool isNotEqualandGreater=(a!=b) && (a>b);
    cout << "Is a equal to b and a greater than b? " << isEqualandandGreater << endl;
    cout << "Is a equal to b or a greater than b? " << isEqualorGreater << endl;
    cout << "Is a not equal to b and a greater than b? " << isNotEqualandGreater << endl;
    cout << "The not operator applied to isEqual is " << !isEqual << endl;
    cout << "The sum of a and b is " << sum << endl;
    cout << "The difference of a and b is " << diff << endl;
    cout << "The product of a and b is " << product << endl;
    cout << "The quotient of a and b is " << quotient << endl;
    cout << "The quotient of a and b as double is " << quotient2 << endl;
    cout << "The modulus of a and b is " << modulus << endl;
    cout << "Is a equal to b? " << isEqual << endl;
    cout << "Is a not equal to b? " << isNotEqual << endl;
    cout << "Is a greater than b? " << isGreater << endl;  
    cout << "Is a less than b? " << isLess << endl;
    cout << "Is a greater than or equal to b? " << isGreaterOrEqual << endl;
    cout << "Is a less than or equal to b? " << isLessOrEqual << endl;
    return 0;
 }