#include <iostream>
#include <vector>


using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int h, w;

	cin >> h;
	int** matrix;
	int* weight; 

	matrix = new int* [h];
	weight = new int [h];

	for (int y = 0; y < h; ++y)
	{
		cin >> weight[y];
		matrix[y] = new int [ weight[y] ];
		for (int x = 0; x < weight[y]; ++x)
		{
			cin >> matrix[y][x];
		}
	}

	for (int y = 0; y < h; ++y)
	{
		for (int x = weight[y] -1 ; x >=0; --x)
		{
			cout << matrix[y][x] << " ";
		}
		cout << "\n";
	}



	for (int i = 0; i < h; ++i)
	{
		delete [] matrix[i];
	}
	delete[] matrix;
	delete[] weight;

	cout << "\n";

	cin >> h;
	vector<vector<int>> v;
	v.resize(h);

	int a;
	for (int y = 0; y < h; ++y)
	{
		cin >> a;
		v[y].resize(a);
		for (int x = 0; x < v[y].size(); ++x)
		{
			cin >> v[y][x];
		}
	}

	for (int y = h - 1; y >= 0; --y)
	{
		for (int x = 0; x < v[y].size(); ++x)
		{
			cout << v[y][x] << " ";
		}
		cout << "\n";
	}

	return 0;



}