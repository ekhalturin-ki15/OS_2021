#include <iostream>
#include <vector>


using namespace std;

int main()
{
mark:

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	/*

	char ch = 'a';

	double d = 1.;

	int a = 100;
	int* t = &a; // Ссылка адрес

	int** tt = &t;

	cout << &a << "  = " << a << " | HEX = " << "\n";

	//cout << hex << a + a * a;

	cout << "   1   =  " << *(&a) <<"\n";

	cout << "   2   =  " << &(*(&a)) << "\n";

	cout << "   3   =  " << *t << "\n";

	cout << "   4   =  " << t << "\n";

	cout << "   5   =  " << &t << "\n";

	cout << "   6   =  " << *(*tt) << "\n";

	cout << "   7   =  " << t[0] << "\n";

	cout << "   8   =  " << t[1] << "\n";

	//t[1] = 1000;


	t = new int[100]; // Динамические массивы
	// 0 - 99

	int aa = 5;

	t[aa] = 1000; // *(t + 1*sizeof(int)) = 1000;
	cout << t << " | ";
	cout << (t + 1) << " = ";


	cout << (t + aa) << " = ";
	cout << &(t[aa]);




	delete [] t;

	int n; cin >> n;

	int* dynamic_mas;
	dynamic_mas = new int[n];
	delete[] dynamic_mas; // Мы удаляем сам массив, int* остаётся

	dynamic_mas = new int[n * 10];
	delete[] dynamic_mas;

	dynamic_mas = &n;

	int mas[1000]; // Статический массивы

	char ch_mas[1000];

	// free malloc

	std::vector<int> v(n);

	cin >> v[100];
	//cout << v[100];

	*/

	int a = 1, b = 2;
	cin >> a >> b;
	int& name = a; // Псевдоним для функций

	int* ptr = &a;



	cout << a << "  " << name<< " "<< *ptr <<"\n";

	name = 2000;

	cout << a << "  " << name << " " << *ptr << "\n";

	//goto(got);

	if (a == b)
	{
		cout << "equ" << "\n";
	}
	else
	{
		cout << "no equ" << "\n";
	}

	cout << "\n";

	a == b ? cout << "equ " : (++a, cout << "no equ ");
	cout << a;
	
	//cout << (a == b ? "equ" : "no equ"); //[]

	//goto();


	cin >> a;
	switch (a)
	{
		case 1:


			break;
		case 2:


		case 4:


			break;
		default: // else


			break;
	}




	return 0;

}