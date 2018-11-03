#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;

class Array
{
	protected:
		int length;
		int *arr;

	public:
		Array(int iValue = 10)
		{
			cout<<"Inside Constructor"<<endl;
			length = iValue;
			arr = new int[length];
		}

		~Array();

		void Accept();
		void Display();
		int GetData(int);
		void SetData(int,int);
};

class ArraySearch:public Array
{
	public:
		ArraySearch(int iValue = 10):Array(iValue)
		{

		}
		int SearchFirst(int);
		int SearchLast(int);
		int Frequency(int);

		int increament(int);
};

class ArrayCompa:public Array
{
	public:
		ArrayCompa(int iValue = 10):Array(iValue)
		{

		}
		int Maximun();
		int Minimun();
		int Difference();
};