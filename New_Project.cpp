#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <list>

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

	list<int> ls({ 5, 6, 7, 8, 9, 10, 11, 9, 1, 9, 23, 43, 54, 9, 64});

	//list<int>::iterator it = find(ls.begin(), ls.end(), 123);

	fuct(ls);

	ls.insert(ls.begin(), 100);

	ls.insert(ls.end(), 100);


	vector<int> v;
	sort(v.begin(), v.end());


	//sort(ls.begin(), ls.end());
	ls.sort();





	list<int>::iterator it = ls.begin();
	cout << "\n";
	for (; it != ls.end(); ++it)
	{
		cout << (*it) << " ";
	}



}
