// Problem : Longest Consecutive Sequence
// Slug    : https://leetcode.com/problems/longest-consecutive-sequence/
// Lang    : C++
// Difficulty: Medium
// Synced  : 2026-07-05T10:05:40.798Z
class Solution {
public:
int count = 0;
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
        if(nums[i]+1 == nums[i+1]){

             count = count+1;} 
        };
        return count+1;
    }
};