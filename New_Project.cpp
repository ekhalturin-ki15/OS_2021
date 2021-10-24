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

	Child()
	{
		name = "&&&";
		age = -1;
		v = { 0, 0 ,0 };
		who = "Child";
	}

	Child(string n) //: v({2, 3, 4})
	{
		name = n;
		age = 1;
		v = {2, 3 ,4}; 
		who = "Child";
	}

	vector<int> v;


};



//
//ostream& operator<<(ostream& out, vector<int> v)
//{
//	for (auto it : v)
//		out << it;
//
//	return out;
//}



int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
 

	//Child ch;

	//ch.Out();

	Base* b;

	b = new Base;

	b->Out();

	delete b;

	b = new Child;

	b->Out();

	delete b;



	//func<float>(1.00);
	//func<int>(100);

	/*vector<int> vv = { 3, 434, 3 , 43 };
	cout << vv;*/

	//new int[1000];
	//{
	//	//int& aa = func_amper();

	//	//aa = 100;

	//	func_amper() = 200;

	//	func_amper() = 10000;

	//	cout << func_amper();

	//	int a = 5;

	//	int i(a);
	//}


}
