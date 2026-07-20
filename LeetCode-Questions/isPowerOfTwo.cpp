class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++){
            int ans= pow(2,i);
            if(ans==n)
            return true;
        }
        return false;
    }
};
#include <bits/stdc++.h>
using namespace std;
int main() {
    Solution s;
    // Type function name on , arguments on 
    cout << "Output: " << s.isPowerOfTwo(16) << endl;
    return 0;
}