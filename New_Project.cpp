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

	return 0;

}