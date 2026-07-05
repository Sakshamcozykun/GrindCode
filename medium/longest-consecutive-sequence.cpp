// Problem : Longest Consecutive Sequence
// Slug    : https://leetcode.com/problems/longest-consecutive-sequence/
// Lang    : C++
// Difficulty: Medium
// Synced  : 2026-07-05T10:09:08.015Z
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1])
                continue;           // Ignore duplicates

            if (nums[i] == nums[i - 1] + 1)
                current++;          // Extend current sequence
            else
                current = 1;        // Start a new sequence

            longest = max(longest, current);
        }

        return longest;
    }
};