#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void fun_cout(int i)
{
	if (i <= 3)
	{
		cout << i;
		fun_cout(i + 1);
	}
	else
		return;

}



int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	for (int i = 0; i <= 3; ++i)
	{
		cout << i;
	}
	cout << "\n";

	//-------- - **------
	/*
		cout << 0;
		cout << 1;
		cout << 2;
		cout << 3;
	*/

	fun_cout(0);
	cout << "\n";

	{
		int i;
		i = 0;
		cout << 0;
		// fun_cout(1);
		{
			int i;
			i = 1;
			cout << 1;
			// fun_cout(2);
			{
				int i;
				i = 2;
				cout << 2;
				// fun_cout(3);
				{
					int i;
					i = 3;
					cout << 3;
					//fun_cout(4);
					{
						int i;
						i = 4;
					}
					



				}

			}

		}
	}


}