//LeetCode-191. Number of 1 Bits
//Link: https://leetcode.com/problems/number-of-1-bits/
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
            if(n&1)
            count++;
            n=n>>1;
        }
        return count;
    }
};
#include <iostream>
using namespace std;
int main() {
    Solution s;
    // Call your function here to test locally
    cout << s.hammingWeight(11) << endl; // Example input
    return 0;
}