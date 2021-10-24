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

class Base
{
public:

	string name;
	string who = "Base";
	int age;

	Base() // По умолчания
	{
		name = "???";
		age = 100;
	}

	Base(string n) : name(n), age(20)
	{
		//name = n;
		//age = 20;
	}

	void Out()
	{
		cout << "\n" <<  name << " "<<age << " "<< who;
	}

	

};



class Child : public Base 
{
public:

	Child(string n) //: v({2, 3, 4})
	{
		name = n;
		age = 1;
		v = {2, 3 ,4}; 
		who = "Child";
	}

	vector<int> v;


};




int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int a = 5;

	int i(a);

	Base base2;

	Base base("r2d2-5");

	base.Out();

	Child ch("000");

	ch.Out();

}
