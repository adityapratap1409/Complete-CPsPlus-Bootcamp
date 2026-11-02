#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len=nums.size();
        vector<int> arr(2, -1); 
        int s=0,e=len - 1;
        while (s<=e) {
            int mid=s+(e-s) / 2;
            if (nums[mid] == target) {
                arr[0] = mid;  
                e = mid - 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        s = 0; 
        e = len - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                arr[1] = mid;
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return arr;
    }
};
int main() {
    Solution s;
    vector<int> inputNums = {5, 7, 7, 8, 8, 10}; 
    vector<int> result = s.searchRange(inputNums, 8);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}