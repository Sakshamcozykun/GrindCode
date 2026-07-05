// Problem : Find the Duplicate Number
// Slug    : https://leetcode.com/problems/find-the-duplicate-number/
// Lang    : C++
// Difficulty: Medium
// Synced  : 2026-07-05T09:10:13.038Z
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        while(nums[i] < nums[j]){
            i++;
            j++;
        }
        return nums[i];
        
    };
};