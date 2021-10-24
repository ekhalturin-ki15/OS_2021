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

enum Type { _int = 0, _char, _string };

struct Node
{
	Type type;


	//const int _int = 0;
	//const int _char = 1;
	//const int _string = 2;
};

struct Int: Node
{
	int data;
	Int(int data)
	{
		this->data = data;
	}
	int& out() { return data; }
};

struct Char : Node
{
	char data;
	Char(char data)
	{
		this->data = data;
	}
	char& out() { return data; }
};

struct String : Node
{
	string data;
	String(string data)
	{
		this->data = data;
	}
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
		int type;
		cin >> type;
		
		switch (type)
		{
		case Type::_int:
			int j;
			cin >> j;
			mas[i] = new Int(j);
			break;
		case Type::_char:
			char ch; cin >> ch;
			mas[i] = new Char(ch);
			break;
		case Type::_string:
			string s; cin >> s;
			mas[i] = new String(s);
			break;
		}


		//int ii = Type::_string;
		mas[i]->type = static_cast<Type>(type);
	}


	for (int i = 0; i < n; ++i)
	{
		if (mas[i]->type == Type::_int) cout << static_cast<Int*>(mas[i])->data<< " ";
		if (mas[i]->type == Type::_char) cout << static_cast<Char*>(mas[i])->data << " ";
		if (mas[i]->type == Type::_string) cout << static_cast<String*>(mas[i])->data << " ";

	}



 
}