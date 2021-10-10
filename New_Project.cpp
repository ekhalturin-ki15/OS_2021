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

void recursion(int step, int number, int max_choose, vector<int>& digit)
{
	if (number == 0)
	{
		cout_ans(digit, step);
		return;
	}

	int upper_limit = min(number, max_choose);	//5 != 3 2
	for (int now_number = 1; now_number <= upper_limit; ++now_number)
	{
		digit[step] = now_number;
		recursion(step + 1, number - now_number, now_number, digit);
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

	//recursion(0, n, n, v);

	// n = 3
	//recursion(0, 3, 3, { 0, 0, 0 })

}