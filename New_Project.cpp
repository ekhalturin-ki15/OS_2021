#include <iostream>
#include <vector>


using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	int* dy_mas;

	dy_mas = new int[n];

	vector<int> v(n);

	int static_mas[1000];

	// [0 n)

	// [10 20]  = 11
	// (10 20] = 20 - 10
	// (10 20) = 9
	// [123 1024] = 902 = 1024 - 123 + 1

	{
		//int a = 0;
		//[ 0 n )

		//int i = 0;
		//for (; i < n; ++i)
		//{
		//	cin >> v[i];
		//	a *= a;
		//}
		//int i = 0
		// if (i < n)
		// cin >> v[i];
		// a = a*a
		// ++i
		// if (i < n)
		// cin >> v[i];
	}

	{
		/*int i = 0, a = 0;
		while (i < n)
		{
			cin >> v[i];
			a *= a;
			++i;
		}*/
	}

	/*int i = 0, a = 0;

	do
	{
		cin >> v[i];
		a *= a;
		++i;
	} while (i < n);*/

	return 0;

}