#include"myheader.h"

Number::Number()
{
	this->iNo = 1;
}

void Number::Accept()
{
	cout<<endl<<"Enter the Number"<<endl;
	cin>>iNo;
}

void Number::Display()
{
	cout<<endl<<"Number is :- \t"<<iNo;
}

void Number::DisplayFactor()
{
	for(int i=1;i<=iNo/2;i++)
	{
		if((iNo%i)==0)
		{
			cout<<i<<"\t";
		}
	}
	cout<<endl;
}

int Number::SumofFactor()
{
	int i = 0, iSum = 0;
	for(i=1;i<=iNo/2;i++)
	{
		if((iNo%i)==0)
		{
			iSum = iSum + i;
		}
	}
	return iSum;
}

int Number::Factorial()
{
	int  iFact = 1, i = 0;

	for(i = 1; i <= iNo; i++)
	{
		iFact = iFact * i;
	}

	return iFact;
}

BOOL AdvNumber :: ChkPrimeNumber()
{
	int i = 0;
	for(i=2;i<=(iNo/2);i++)
	{
		if((iNo%i)==0)
		{
			break;
		}
	}

	if(i > (iNo/2))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

BOOL AdvNumber :: ChkPerfect()
{
	int iSize = SumofFactor();
	
	if(iSize == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}