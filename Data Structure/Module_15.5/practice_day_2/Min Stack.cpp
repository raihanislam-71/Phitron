#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		stack<int> st;
		stack<int> newst;
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			st.push(num);
			if(newst.empty() || num <= newst.top())
			{
				newst.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()) return -1;
			int x = st.top();
			st.pop();
			if(x == newst.top())
			{
				newst.pop();
			}
			return x;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(!st.empty()) return st.top();
			else return -1;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(!newst.empty()) return newst.top();
			else return -1;	
		}
};