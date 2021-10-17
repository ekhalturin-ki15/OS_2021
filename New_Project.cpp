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


	mst.erase(20);

	cout << "\n"; for (auto i2 : mst) cout << i2 << " ";

	cout << "\n" << mst.count(1000);


}
