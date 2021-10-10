#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

inline void function_1()
{
	cout << "Hello" << "\n";
}

void function_2(int a, int b)
{
	cout << a << " " << b <<"\n";
}

int function_3()
{
	return 5 * 5;
}

int function_4(string s)
{
	return s.size();
}





int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	function_1(); // void

	/*
	{
		cout << "Hello";
	}
	*/

	function_2(8, 15); // void

	/*
	{
		int 093@48643_a; int 093@4643_b;

		093@48643_a = 8;
		093@4643_b = 15;

		cout << 093@48643_a << " " << 093@4643_b <<"\n";
	}
	*/


	function_3();

	/*
		{
			5 * 5;
		}
	*/

	int a = 10;
	a += function_3();

	/*
		{
			a += 5 * 5;
		}
	*/


	int size;

	size = function_4("hello c++");

	/*
		{
			string s;

			s = "hello c++";

			size = s.size();
		}
	*/



}