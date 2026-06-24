// Problem : Implement Stack using Queues
// Slug    : https://leetcode.com/problems/implement-stack-using-queues/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T12:34:05.349Z
    int pop() {
        int x = que.front();
        que.pop();
        return x;
    }
    
 
    int top() {
        return que.front();
    }
    
    
    bool empty() {
        return que.empty();
    }
};