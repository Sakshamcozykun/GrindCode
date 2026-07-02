// Problem : Merge Intervals
// Slug    : https://leetcode.com/problems/merge-intervals/
// Lang    : C++
// Difficulty: Medium
// Synced  : 2026-07-02T08:01:44.951Z
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        vector<int> current = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {

            // Overlapping intervals
            if (current[1] >= intervals[i][0]) {
                current[1] = max(current[1], intervals[i][1]);
            }
            // Non-overlapping interval
            else {
                ans.push_back(current);
                current = intervals[i];
            }
        }

        // Push the last merged interval
        ans.push_back(current);

        return ans;
    }
};