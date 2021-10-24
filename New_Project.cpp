#include <iostream>
#include <string>
#include <vector>

using namespace std;

//ostream& operator<<(ostream& out, vector<int> v)
//{
//	for (auto it : v)
//		out << it;
//
//	return out;
//}

struct Node
{
	enum {_int, _char, _string} type;

	//const int _int = 0;
	//const int _char = 1;
	//const int _string = 2;

};

struct Int: Node
{
	int data;
	int& out() { return data; }
};

struct Char : Node
{
	char data;
	char& out() { return data; }
};

struct String : Node
{
	string data;
	string& out() { return data; }
};

//
//
//struct All
//{
//	int type;
//
//	int data1;
//	char data2;
//	string data3;
//};

// {1, "36565" , 43, '3', '2', "43434", 5, 3, 2}


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
 
	//Unit test

	vector<Node*> mas;
	
	int n;
	cin >> n;

	mas.resize(n);

	srand(time(0));

	for (int i = 0; i < n; ++i)
	{

	}



	//vector<All> v(2);

	//v[0].data1 = 1;
	//v[0].type = 0;

	//v[1].data3 = "36565";
	//v[1].type = 2;


	//for (int i = 0; i < 2; ++i)
	//{

	//}



 
}