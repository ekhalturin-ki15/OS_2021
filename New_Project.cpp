#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

struct my_vector
{
public:

	my_vector(int n)
	{
		mas = new int[n];
	}

	~my_vector()
	{
		delete[] mas;
	}

	void resize(int n)
	{
		mas = new int[n];
	}


private:
	int size = 0;

	int* mas;


};

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vector<int> v(50);

	int n;
}