#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <list>

using namespace std;

typedef vector<vector<int>> matrix;



struct Str
{
	long long a, b, c;
};



int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	matrix a;
	matrix b;

	//const_cast

	string s = "3434";

	vector<int> v({ 999, 1, 5, 3 ,6 ,3 ,4 ,5 ,6 ,23 ,21, 10000});

	//v.size();

	v.push_back(10); 


	// random iterator
	// Самый лучший доступ за O(1)
	// ++ -- += 5 -=20

	// between iterator
	// ++ --

	// forward iterator
	// ++

	// IO iterator
	// cin  cout



	//vector<int> st;
	//vector<int>::iterator it = st.begin();
	//int* it2 = &st[0];

	cout << *v.begin() << " ";

	sort(v.begin(), v.end());

	cout << *v.begin() << " ";

	vector<int>::iterator it = v.end();
	cout << *(--v.end()) << " ";
	//std::sort();

	cout << sizeof(Str);

	v.size();
	
	//vector<int>::reverse_iterator rit = v.rbegin();

	cout << " " << *(v.rbegin()) << " " << *(--v.rend());

	list<int> l; // between it


	




}
