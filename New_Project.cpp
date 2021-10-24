#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Base
{
public:

	string name;
	string who = "Base";
	int age;

	Base() // �� ���������
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



struct Child : public Base 
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

	void Out()
	{
		cout << "\n" << name << " " << age << " " << who << "\n";

		cout << " vector: ";  for (auto it : v) cout << it << " ";

	}


	vector<int> v;
};




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


	Child ch;

	ch.Out();




	Base* b;

	b = new Base;

	b->Out();

	delete b;

	b = new Child;

	b->Out();

	delete b;

	const int size = 10;
	void* v[size];

	//{1, 1, 2 ,"cf", 32, 'a' , 'd', 'g'}

	srand(time(0));
	
	for (int i = 0; i < size; ++i)
	{
		int r = rand() % 2;

		if (r == 0)
		{
			v[i] = new Child(to_string(i));
			//cout << *v[i];
		}
		else
		{
			v[i] = new Base(to_string(i));
		}

	}


	for (int i = 0; i < size; ++i)
	{
		static_cast<Child*>(v[i])->Out();
	}


	string a;
	while (cin >> a);



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
