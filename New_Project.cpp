#include <iostream>
#include <vector>


using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int h, w;

	cin >> h >> w;
	int** matrix;

	matrix = new int* [h];
	for (int i = 0; i < h; ++i)
	{
		matrix[i] = new int [w];
	}


	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			cin >> matrix[y][x];
		}
	}



	for (int y = 0; y < h; ++y)
	{
		for (int x = w -1 ; x >=0; --x)
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

	return 0;

}