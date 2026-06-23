// Problem : Assign Cookies
// Slug    : https://leetcode.com/problems/assign-cookies/
// Lang    : C++
// Synced  : 2026-06-23T10:36:56.706Z
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0;
        int j = 0;
        int count = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] < g[i]) {
                j++;
            } else {
                count++;
                i++;
                j++;
            }
        }
