#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

class Number
{
	protected:
		int iNo;
	
	public:
		Number();

		 void Accept();
		 void Display();

		void DisplayFactor();
		int SumofFactor();
		int Factorial();
};

class AdvNumber:public Number
{
	public:
		AdvNumber():Number()
		{

		}

		BOOL ChkPrimeNumber();
		BOOL ChkPerfect();
};