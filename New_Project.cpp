#include <iostream>
#include <fstream>

using namespace std;

int global_1;

int main()
{
	// ���_������ ���_����������


	////������������� ����������
	//int i = 5, j ,k = i + 2; // 32 ����� �����
	////int j;
	////int k;

	//short sr; //16 

	//float f; // 32 ������������
	//double d; //64

	// __int32 ii; // -2^31 (2^31 - 1) | ���� (�����)
	// const unsigned __int32 uii = 18; // 0 (2^32 - 1) | (�����)

	//__int64 i64;

	//long long ll; // 64 �����
	//bool bl;


	//const int amount_all = 3;

	//char ch; // 1 ,����
	////---------------
	//
	////�����

	//// %

	//i = 10 % 4; // i = 10 - (10/4)*4    // i = 10 - 4*2;
	//i = 10 / 4; //2.5  -> 2

	//int a = 70, b = 31, c;


	//j = a % b;

	//(a % b == 0); // a ������� �� ���� b


	//c = (a / b) * b;
	//j = a - c; // j = a - (a / b) * b;




	//j = i + k - i;

	//d = double(j) / amount_all; // 7.34344

	////���
	//
	//// ����� -> 1
	//// ����� -> 0

	//i = (5 == 4);

	//i = 3 || 2; 

	//i = (0  || 1) && 0;

	//// ||   +   
	//// 
	//// 
	//// 

	//// &&   *

	//// == >= <=  !=
	//// < >  !  
	//// ||   &&


	////�������

	//int a = 10, ao = 0xA; // 1010

	//int b = 7, bo = 0x7; // 0111

	//int c = a & b;
	//c = a && b;

	//int d = a | b;
	////0 255 
	////0 0xff

	//d &= a;
	//d |= a;
	//d ^= a;

	//// a	0000000000000000000000001010
	//// b	0000000000000000000000001110
	//// d	0000000000000000000000000111


	////3, 5, 4, 3, 2
	////0, 0, 3, 5, 4

	////3, 2, 3, 5, 4

	//// a	0000000000000000000000001010
	//// b	0000000000000000000000000111
	//// 
	//// c	0000000000000000000000001101

	//(0 == b ^ b); // ������ 0

	//a = 325435435; b = 98748597;

	//c = a ^ b;
	//c = c ^ a;


	//a = 0x8fffffff; // 1111111111111111111111

	//a <<= 1; // a = a << 1;    * 2^3

	////	1011010101001
	////	0110101010010

	////	1111010101001
	////	1110101010010

	//a = 0x7fffffff;

	//a <<= 1;

	//a >>= 2; // /2^2

	//a = b % 2;

	//a = b & 1; 

	//// ++a  3 asm
	//// a*b	15 asm
	//
	////00000001010101
	////01010101010111
	////00000001010101

	//__int32 q = 0x80000000;
	//unsigned __int64 aa = q;

	////000000000000000000010
	//aa = (aa << 30) >> 30; // 1 asm

	//// & 
	//// |
	//// ^
	// 
	// 
	// 
	// ~
	// !
	//char ch = 97;

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//cin >> ch >> q >> aa;

	//cout << aa << " " << ch;

	ifstream in("input.txt");
	ofstream out("output.txt");
	ofstream out2("output1.txt");

	unsigned int a, b;

	out << a;

	in >> a;

	char ch = a;

	out << "Hello world " << a << " " << ch;

	out2 << "Privet";

	in >> a;

	in >> b;

	{
		int a = 19;
		if (a >= 8)
		{
			if (a <= 10)
			{
				out2 << " Mir";
				out2 << " Again";
			}
			else
			if (a <= 15)
			{
				out2 << " Mir";
				out2 << " Again";
			}
		}


	}

	{

		int a = 19;

	} // ����������
	
}