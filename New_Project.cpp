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
	string cash; // ����
	string name; // ����
	string sur_name;// ����

	int age;// ����

public:


	Champer my_champer;// ����

	void CinDate() // ������
	{
		int a;
		cin >> name >> sur_name >> age >> a >> cash;

		my_champer = static_cast<Champer>(a);

	}

	string OutDate_1() // �����
	{
		string name = "404";
		string ret = name + " " + sur_name + "\n";


		return ret;
	}
	
	
	string OutDate_2() // �����
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

	New_Struct new_struct; /*��������� �����*/

	//cin >> new_struct.a >> new_struct.b >> new_struct.c;

	//New_Struct second_struct;

	//cin >> second_struct.a >> second_struct.b >> second_struct.c;

	Human my_human, my_human_2;

	my_human.CinDate();

	cout << my_human.OutDate_1();

	cout << my_human.OutDate_2();

	//my_human_2.CinDate();

}