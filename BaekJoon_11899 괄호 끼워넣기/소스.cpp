#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char> s;
	string input;

	cin >> input;

	for (int i = 0; input[i]; i++)
	{
		if (s.size() == 0)
			s.push(input[i]);
		else
		{
			if (s.top() == '(' && input[i] == ')' )
				s.pop();
			else
			{
				s.push(input[i]);
			}
		}
	}

	cout << s.size();
}