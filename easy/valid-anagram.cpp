// Problem : Valid Anagram
// Slug    : https://leetcode.com/problems/valid-anagram/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T19:22:43.517Z
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        
        for(char &ch : s) {
            count[ch-'a']++;
        }
        
        for(char &ch : t) {
            count[ch-'a']--;
        }
        
        bool allZeros = all_of(begin(count), end(count), [](int element) {
            return element == 0;
        });
        
        return allZeros;
    }
};
