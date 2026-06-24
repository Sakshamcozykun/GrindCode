// Problem : Implement Queue using Stacks
// Slug    : https://leetcode.com/problems/implement-queue-using-stacks/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T12:52:42.981Z
    }
    
    int peek() {
        if(output.empty())
            return peekEl;
        
        return output.top();
    }
    
    bool empty() {
        return val;
        output.pop();
        if(input.empty() && output.empty())
            return true;
        
        return false;
    }
};