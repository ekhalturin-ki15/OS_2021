#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;


struct human
{
	int a, b, c;
};

template <typename Type>
struct Array
{
	//Array() = delete;

	~Array()
	{
		delete	[]	data;
	}

	Array()
	{
		this->data	= nullptr;
	}

	Array(unsigned int size)
	{
		this->data = nullptr;
		this->Resize(size);
	}

	Type* data = 0;

	void Resize(unsigned int size)
	{
		delete[] data;
		data = new Type[size];
	}

};

void func()
{

}

void func(int a)
{

}


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	{
		Array<int> mas;
		mas.Resize(50);
		mas.Resize(100);

		Array<string> s_mas(100);
		//s_mas.Resize(10);

		func();
		func(10);




	}


	human* h;
	h = new human[100];
	h[5].a = 100;

	int a, b, c;

	tuple<int, int, int> t(a,b,c);

	auto [xx, yy, zz] = t;

	get<0>(t) = 10;

	pair<int, int> pr(a, b);

	vector<int> l(10), r(10);

		swap(l[0], l[6]);
		swap(r[0], r[6]);

	vector<pair<int, int>> lr(10);
		swap(lr[0], lr[6]);


	pr.first = 100;
	cout << pr.second;


	pair<int, int> one_pair(10, 15);
	auto [x, y] = one_pair;

	

}
