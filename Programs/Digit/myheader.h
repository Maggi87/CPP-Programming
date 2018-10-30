/*
	Desing Object Oriented application which accept number from user and provide below service as

	1> Check whether number is Armstrong or not
	2> Check whether number is Strong or not 
*/

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

class Digit
{
	protected:
		int iNo;

	public:
		void Accept();
		void Display();
		
		int CountDigit();
		int SumDigit();
};
class DigitChk: public Digit
{
	public:
	int Fact(int);
	//int Power(int, int);

	BOOL ChkStrong();
	BOOL ChkArmStrong();
};
