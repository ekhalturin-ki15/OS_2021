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

using namespace std;

typedef vector<vector<int>> matrix;


void fuct(list<int>& ls)
{
	list<int>::iterator it = ls.begin();
	for (; it != ls.end(); )
	{
		list<int>::iterator next_it = it;
		++next_it;


		if ((*it) == 9)
			ls.erase(it);
		else
			cout << (*it) << " ";


		it = next_it;
	}
}



int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	auto a = 5ull;
	//list<int> ls({ 5, 6, 7, 8, 9, 10, 11, 9, 1, 9, 23, 43, 54, 9, 64});

	////list<int>::iterator it = find(ls.begin(), ls.end(), 123);

	//fuct(ls);

	//ls.insert(ls.begin(), 100);

	//ls.insert(ls.end(), 100);


	//forward_list<int> lsw;

	//vector<int> v;
	//sort(v.begin(), v.end());


	////sort(ls.begin(), ls.end());
	//ls.sort();


	//list<int>::iterator it = ls.begin();
	//cout << "\n";
	//for (; it != ls.end(); ++it)
	//{
	//	cout << (*it) << " ";
	//}

	queue<int> q({3,4,3,-23,32,59,29,32});

	q.push(2);
	q.push(1);
	q.push(4);

	q.pop(); q.pop(); q.pop(); q.pop();
	cout << q.front();

	string s = "3435435";

	s = s + s;


	stack<int> st;

	//for (auto it : q) cout << it << " ";

	st.push(10); st.push(10); st.push(10); st.push(10);
	st.pop();

	st.top();


	vector<int> v({435435,324,324,324}); // --insert --erase

	v.push_back(100); // O(1)

	v.pop_back(); v.pop_back();

	v.front();

	v.back();


	deque<int> d;

	//d[10];
	//d.push_front();
	//d.pop_front();



}
