// Problem : Implement Queue using Stacks
// Slug    : https://leetcode.com/problems/implement-queue-using-stacks/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-24T13:04:13.931Z
class MyQueue {
public:
    
    stack<int> input;
    stack<int> output;
    int peekEl = -1;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()) {
            peekEl = x;
        }
        input.push(x); 
    }
    //amortized O(1)
    int pop() {
        if(output.empty()) {
           
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        
        int val = output.top(); //O(1)
        output.pop();
        return val;
    }
    
    int peek() {
        if(output.empty())
            return peekEl;
        
        return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty())
            return true;
        
        return false;
    }
};