#include <iostream>
using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	

	char ch = 'a';

	double d = 1.;

	int a = 100;
	int* t = &a; // —сылка адрес

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


	t = new int[100]; // ƒинамические массивы
	// 0 - 99

	int aa = 5;

	t[aa] = 1000; // *(t + 1*sizeof(int)) = 1000;
	cout << (t + aa) << " = ";
	cout << &(t[aa]);


	delete [] t;
	


	return 0;

}