#include"myheader.h"

int main()
{
	DigitChk obj;
	
	obj.Accept();

	obj.Display();

	cout<<"Digit Counter:-\t"<<obj.CountDigit()<<endl;
	cout<<"Sum of Digit:-\t"<<obj.SumDigit()<<endl;
	
	
	if(obj.ChkStrong())
	{
		cout<<"Number is Strong"<<endl;
	}
	else
	{
		cout<<"Number is not Strong"<<endl;
	}

	if(obj.ChkArmStrong())
	{
		cout<<"Number is Armstrong"<<endl;
	}
	else
	{
		cout<<"Number is not Armstrong"<<endl;
	}
	return 0;
}