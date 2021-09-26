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

	/*int i = 0, a = 0;
	while (true)
	{
		if (i >= n) break;
		cin >> v[i];
		a *= a;

		++i;
	}*/


	for (int i = 0; i < n; ++i) cin >> v[i];


	long long mul = 1, add = 0;
	for (int i = n - 1; i >=0; --i) add += v[i];

	//cout << add;

	// сортировка слиянием merge
	// быстрая сортировка
	// пирамидальная
	// пузырьком
	// подсчётом

	// O(n^2)
	// n + (n-1) + .. + 1 = (n)*(n+1)/2

	// <-------
	//7 233  5 10 993 1827 827 5 2        
	//233 7 10 993 1827  827 5 2


	for (int i = 0; i < n; ++i)
	{
		for (int i = 0; i < n; ++i) cout << v[i] << " ";
		cout << "\n";
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (v[j] < v[j + 1])
			{
				//swap(v[j], v[j + 1]); // 7 10
				//int save; 
				//save = v[j];  // 7
				//v[j] = v[j + 1];  // 10 10
				//v[j + 1] = save; // 10 7

				//v[j] ^= v[j + 1] ^= v[j] ^= v[j + 1];

				v[j] = v[j] ^ v[j + 1]; // Зелёный
				v[j + 1] = v[j + 1] ^ v[j];
				v[j] = v[j] ^ v[j + 1];
			}
		}

	}


	//int matrix[100][1000][12][2][2]; // 4*100*1000*12*2*2


	cin >> n;
	int** matrix;

	//matrix = new int* [100];


	return 0;

}