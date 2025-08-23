#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char> s1;
	stack<char> s2;
	for(char c:s)
	{
		s2.push(c);
	}

	string x ="";
	while(!s2.empty())
	{
		x += s2.top();
		s2.pop();
	}
	return x;
}
