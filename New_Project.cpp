#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


void cout_ans(const vector<int>& digit, int now_size)
{
	for (int i = 0; i < now_size; ++i)
		cout << digit[i] << " ";

	cout << "\n";

	return;
}


// step - ячейка, куда записываем
// number - сколько осталось
// max_choose - ранее макс исп число
// digit - записываем ответ


// 1 5 1
void recursion(int i, int number, int min_choose, vector<int>& digit, int& now)
{
	if (number == 0)
	{
		cout << now << " | ";
		++now;
		cout_ans(digit, i);
		return;
	}

	int upper_limit = min(number, min_choose);	//5 != 3 2
	for (int now_number = 1; now_number <= upper_limit; ++now_number) // 1..6 //1..1 // 1..1
	{
		digit[i] = now_number;
		recursion(i + 1, number - now_number, now_number, digit, now);
	}

	return;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	vector<int> v(n);
	int now = 0;

	recursion(0, n, n, v, now);
	cout << "\n";

	//// n = 3
	////recursion(0, 3, 3, { 0, 0, 0 })
	//{
	//	int i = 0; int number = 3; int max_choose = 3; vector<int>& digit = v;

	//	int upper_limit = 3;

	//	digit[i] = 1;
	//	recursion(1, number - 1, now_number, digit);

	//	digit[i] = 2;
	//	recursion(1, number - 2, now_number, digit);

	//	digit[i] = 3;
	//	recursion(1, number - 3, now_number, digit);


	

	



}