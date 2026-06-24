// Problem : Valid Parentheses
// Slug    : https://leetcode.com/problems/valid-parentheses/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T13:42:30.317Z
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(char ch:s) {
            if (ch == '(')
			    st.push(')');
		    else if (ch == '{')
			    st.push('}');
            else if (ch == '[')
                st.push(']');
            else if (st.empty() || st.top() != ch)
                return false;
            else {
                st.pop();
            }
        }
        
        return st.empty();
    }
};