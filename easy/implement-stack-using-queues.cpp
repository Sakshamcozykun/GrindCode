// Problem : Implement Stack using Queues
// Slug    : https://leetcode.com/problems/implement-stack-using-queues/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T05:43:40.171Z
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        swap(q1, q2);
        while(!q1.empty()){
            q2.push(q1.front());    q1.pop();
        }
    void push(int x) {
        q2.push(x);
    
    /** Push element x onto stack. */
    MyStack() {
        
    }
    queue<int> q2;
    queue<int> q1;
    /** Initialize your data structure here. */
public:
class MyStack {