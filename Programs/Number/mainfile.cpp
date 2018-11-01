#include"myheader.h"

int main()
{
	Number obj1;
	obj1.Accept();
	obj1.Display();
	cout<<endl<<"Number of Factor is :-";
	obj1.DisplayFactor();
	cout<<"Sum Factorial:- \t"<<obj1.SumofFactor()<<endl;
	cout<<"Numner of Factorial:-\t"<<obj1.Factorial()<<endl;

	AdvNumber obj2;
	obj2.Accept();
	obj2.Display();
	cout<<endl<<"Number of Fqctorial is :-\t"<<obj2.Factorial()<<endl;

	if(obj2.ChkPrimeNumber())
	{
		cout<<endl<<"Number is Prime"<<endl;
	}
	else
	{
		cout<<endl<<"Number is Not Prime"<<endl;
	}

	if(obj2.ChkPerfect())
	{
		cout<<endl<<"Number is Perfect"<<endl;
	}
	else
	{
		cout<<endl<<"Number is not perfect"<<endl;
	}
	return 0;
}