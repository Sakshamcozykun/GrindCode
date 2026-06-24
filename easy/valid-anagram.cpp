// Problem : Valid Anagram
// Slug    : https://leetcode.com/problems/valid-anagram/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T19:22:06.629Z
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s));
        sort(begin(t), end(t));
        
        return s == t;
    }
};
