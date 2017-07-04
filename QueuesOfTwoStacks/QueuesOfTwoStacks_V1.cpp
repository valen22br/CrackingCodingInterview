#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stack_newest_on_top, stack_oldest_on_top;   
        void push(int x) {
            
            fromOldToNew();
            stack_newest_on_top.push(x);
            //fromNewToOld();
        }

        void pop() {
            fromNewToOld();
            stack_oldest_on_top.pop();
            
        }

        int front() {
            fromNewToOld();
            if(!stack_oldest_on_top.empty())
                return stack_oldest_on_top.top();
               return 0;
        }
        void fromNewToOld()
        {
            while(!stack_newest_on_top.empty())
            {
                stack_oldest_on_top.push(stack_newest_on_top.top());
                stack_newest_on_top.pop();
            }
        }
    
        void fromOldToNew()
        {
            while(!stack_oldest_on_top.empty())
            {
                stack_newest_on_top.push(stack_oldest_on_top.top());
                stack_oldest_on_top.pop();
            }
        }
        
    
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            //q1.fromOldToNew();
            q1.push(x);
            
        }
        else if(type == 2) {
            //q1.fromNewToOld();
            q1.pop();
        }
        else 
        {
            //q1.fromNewToOld();
            cout << q1.front() << endl;
        }
        //else cout << "option 3 or + "<< endl;//q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
