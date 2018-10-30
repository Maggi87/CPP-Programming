#include"myheader.h"

void Digit::Accept()
{
	cout<<"Enter the Number:-\t"<<endl;
	cin>>iNo;
}
void Digit::Display()
{
	cout<<"Number is:-\t"<<iNo<<endl;
}

int Digit::CountDigit()
{
	int iValue = iNo;
	int iCnt = 0;

	while(iValue!=0)
	{
		iCnt++;
		iValue = iValue / 10;
	}

	return iCnt;
}

int Digit::SumDigit()
{
	int iValue = iNo, iSum = 0;

	while(iValue!=0)
	{
		iSum = iSum + (iValue % 10);
		iValue = iValue / 10;
	}

	return iSum;
}
BOOL DigitChk :: ChkStrong()
{
	int iSum = 0;
	int temp = iNo;
	int iDigit = 0;

	while(temp!=0)
	{
		iDigit = temp % 10;
		iSum = iSum + Fact(iDigit);
		temp = temp / 10;
	}
	if(iSum == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int DigitChk::ChkArmStrong()
{
	int iSum = 0;
	int temp = iNo;
	int iDigit = 0;

	while(temp!=0)
	{
		iDigit = temp % 10;
		iSum = iSum + iDigit * iDigit * iDigit;
		temp = temp / 10;
	}
	if(iSum == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int DigitChk::Fact(int iNo)
{
	int iFact = 1;

	for(int i=1;i<=iNo;i++)
	{
		iFact = iFact * i;
	}
	return iFact;
}