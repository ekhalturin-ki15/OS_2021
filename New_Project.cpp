#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;




int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	//vector<int> v(n);

	const int max_v = 1e6;
	vector<int> interval(max_v);


	for (int i = 0; i < n; ++i)
	{
		int it;
		//cin >> v[i];
		cin >> it;
		++interval[it];
	}

	for (int i = max_v -1 ; i >=0 ; --i)
	{
		for (int j = 0; j < interval[i]; ++j)
		{
			cout << i << " ";
		}


	}










	// Сортировка подсчётом
	//  0 - 1000000

	//int n;
	//cin >> n;

	//vector< int > v(n); // vector - структура (класс)
	//// (public)	Структура - набор данных <-> функций (для хранения данных (контейнера))
	//// == (private) Класс - набор данных <-> функций (логическая обработка данных) __name

	////for (int i = 0; i < n; ++i) cin >> v[i];


	//vector < int > p;

	//int range, n_min = 1 << 30, n_max = -(1 << 30);

	//for (auto& it : v)
	//{
	//	cin >> it;

	//	//if (n_min > it) n_min = it;
	//	//else n_min = n_min;

	//	n_min = std::min(n_min, it);

	//	n_max = std::max(n_max, it);
	//}

	//range = n_max - n_min + 1;

	//p.resize(range);

	//for (int i = 0; i < n; ++i)
	//{
	//	const int& it = v[i];
	//	++p[it - n_min];
	//}


	//for (int i = 0; i < range; ++i)
	//{
	//	for (int j = 0; j < p[i]; ++j)
	//	{
	//		cout << i + n_min << " ";
	//	}


	//}



	/*for (int i =0; i < n; ++i)
	{
		int& it = v[i];
		cin >> it;
	}*/

	//int obj = 10;
	//int& q = obj; // obj для Чтение и Запись
	//q = 1000;


	//int res = obj; // obj для Чтение










}