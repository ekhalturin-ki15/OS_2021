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

	list<int> ls;

	ls.insert(ls.begin(), 20);

	set<int, greater<int>> st; // Красно-черное дерево


	int l, r;
	//if (!(l < r) && !(r < l)) // ==

	st.insert(1000);
	st.insert(20);
	st.insert(5);
	st.insert(50);
	st.insert(20);
	st.insert(5);
	st.insert(50);
	st.insert(4);
	st.insert(1000);

	set<int>::iterator it;

	st.erase(50);

	cout << "\n"; for (auto it : st) cout << it << " ";

	cout<< "\n"<<st.count(999);

	//[] random

	// set between iterator
	

	multiset<int> mst;

	mst.insert(1000);
	mst.insert(20);
	mst.insert(5);
	mst.insert(50);
	mst.insert(20);
	mst.insert(5);
	mst.insert(50);
	mst.insert(4);
	mst.insert(1000);

	multiset<int>::iterator i2;

	mst.erase(50);

	cout << "\n"; for (auto i2 : mst) cout << i2 << " ";
	//mst[0];

	mst.erase(20);

	cout << "\n"; for (auto i2 : mst) cout << i2 << " ";

	cout << "\n" << mst.count(1000);

	map<int, int> m; // set<pair<int,int>> 

	// []


	m[10] = 8;

	m[100] = 1;

	m[1000] = 34;

	m[1] = 46;

	m[10000000] = 199;

	//map<int, int>::iterator it3 = m.begin();

	cout << "\n";
	for (auto it : m)
	{
		cout<< it.first << " " << it.second <<"\n";
	}

	map<string, vector<int> > ms;

	ms["hello"].push_back(1);
	ms["hello"].push_back(1);
	ms["hello"].push_back(2);
	ms["hello"].push_back(1);
	ms["hello"].push_back(3);
	ms["hello"].push_back(1);
	ms["hello"].push_back(4);
	ms["hello"].push_back(5);
	ms["hello"].push_back(1);


	unordered_map<int, int> um;

	string a = "0";
	string a1= "1";
	string a2 = "2";
	//...

	string a10000 = "100004353456436546546";

	int b = 100, b1 = 1;
	//....
	int b10000 = 10000;

	um[a] = b;


	//На самом деле
	vector<vector<int>> vv(10);

	vv[a.size()].push_back(b); // 
	vv[a1.size()].push_back(b1);
	//...
	vv[a10000.size()].push_back(b10000);

	//





	um[2] = 10;
	um[10] = um[2] * um[2];

	um[100] = 10010;
	um[100] += 10010;

	um[2] = um[10];

	cout << "\n";
	for (auto it : um)
	{
		cout << it.first << " " << it.second << "\n";
	}



	priority_queue<int> pq = { 243, 3, 3,4 , -12, 3, 5, 3,50 };

	pq.push(10);
	pq.pop();
	cout<< pq.top();


}
