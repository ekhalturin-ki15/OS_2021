#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

enum Stage
{
	pause, start, end = 1, strange
};

enum Champer
{
	angry, hunger
};


struct Array
{
	int* date;




};


struct Human
{

private:
	string cash; // поля
	string name; // поля
	string sur_name;// поля

	int age;// поля

public:


	Champer my_champer;// поля

	void CinDate() // методы
	{
		int a;
		cin >> name >> sur_name >> age >> a >> cash;

		my_champer = static_cast<Champer>(a);

	}

	string OutDate_1() // Метод
	{
		string name = "404";
		string ret = name + " " + sur_name + "\n";


		return ret;
	}
	
	
	string OutDate_2() // Метод
	{
		string name = "404";
		string ret = this->name + " " + sur_name + "\n";
		//(*this).name; == this->name;

		(*this).cash = 1000;

		return ret;
	}

} first;




struct New_Struct
{
	int a;
	int b, c;
};

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	New_Struct new_struct; /*экземпляр класс*/

	//cin >> new_struct.a >> new_struct.b >> new_struct.c;

	//New_Struct second_struct;

	//cin >> second_struct.a >> second_struct.b >> second_struct.c;

	Human my_human, my_human_2;

	my_human.CinDate();

	cout << my_human.OutDate_1();

	cout << my_human.OutDate_2();

	//my_human_2.CinDate();

}