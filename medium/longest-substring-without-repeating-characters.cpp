// Problem : Longest Substring Without Repeating Characters
// Slug    : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Lang    : C++
// Difficulty: Medium
// Runtime : 3 ms
// Memory  : 11.7 MB
// Synced  : 2026-07-06T07:18:17.781Z
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            st.clear();

            for (int j = i; j < n; j++) {
                if (st.count(s[j])) {
                    break;
                }

                st.insert(s[j]);
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};