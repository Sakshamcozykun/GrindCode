// Problem : Max Consecutive Ones
// Slug    : https://leetcode.com/problems/max-consecutive-ones/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-23T10:41:06.142Z
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};