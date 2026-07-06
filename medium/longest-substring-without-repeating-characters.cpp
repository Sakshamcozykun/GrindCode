// Problem : Longest Substring Without Repeating Characters
// Slug    : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Lang    : C++
// Difficulty: Medium
// Runtime : 572 ms
// Memory  : 153.7 MB
// Synced  : 2026-07-06T07:20:40.487Z
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};