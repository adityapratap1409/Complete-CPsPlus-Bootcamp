//LeetCode 1281. Subtract the Product and Sum of Digits of an Integer
//Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0,answer;
        while(n!=0){
            int dig=n%10;
            prod=dig*prod;
            sum=sum+dig;
            n=n/10;
        }
        answer=prod-sum;
        return answer;
    }
};
#include <iostream>
using namespace std;
int main() {
    Solution s;
    // Call your function here to test locally
    cout << s.subtractProductAndSum(234) << endl;
    return 0;
}