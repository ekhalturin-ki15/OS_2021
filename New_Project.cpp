#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <list>
#include <forward_list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>


using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	map< int, int > um;

	{
		queue<int> pr;

		pr.push(10);
		pr.push(10);
		pr.push(11);
		pr.push(10);
		pr.push(10);
		pr.push(90);
		pr.push(10);
		pr.push(9);
		pr.push(9);
		pr.push(10);

		while (!pr.empty())
		{
			cout << pr.front() << " ";
			pr.pop();
		}

	}


	
	{
		cout << "\n Стек";
		stack<int> pr;

		pr.push(10);
		pr.push(10);
		pr.push(11);
		pr.push(10);
		pr.push(10);
		pr.push(90);
		pr.push(10);
		pr.push(9);
		pr.push(9);
		pr.push(10);

		while (!pr.empty())
		{
			cout << pr.top() << " ";
			pr.pop();
		}

	}

	cout << "\n priority_queue";

	priority_queue<int> pr;

	pr.push(10);
	pr.push(10);
	pr.push(11);
	pr.push(10);
	pr.push(10);
	pr.push(90);
	pr.push(10);
	pr.push(9);
	pr.push(9);
	pr.push(10);

	while (!pr.empty())
	{
		cout << pr.top() << " ";
		pr.pop();
	}






}
