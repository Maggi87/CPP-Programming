#include"myheader.h"

int ArraySearch::increament(int iData)
{
	for(int i = 0; i< iData;i++)
	{
		cout<<i;
	}

	return iData;
}
int ArraySearch::SearchFirst(int data)
{
	int i = 0;	
	
	for(i=0; i < this->length; i++)
	{
	 	if(this->arr[i] == data)
		{
			break;			
		}
	}

	if(i == this->length)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

void Array::Accept()
{
	int i = 0;
	
	for(i = 0; i<this->length;i++)
	{
		cout<<"Enter the Element\t"<<i+1<<endl;
		cin>>this->arr[i];
	}
}

void Array::Display()
{
	
	for(int i = 0; i < this->length;i++)
	{
		cout<<this->arr[i]<<"\t";
	}
	cout<<"\n";
}

int Array::GetData(int index)
{
	
	if((index >= length)||(index<0))
	{
		return -1;
	}
	else
	{
		return (this->arr[index]);
	}
}

void Array::SetData(int iValue,int index)
{

	if((index>=length)&&(index<0))
	{
		return;
	}
	else
	{
		this->arr[index] = iValue;
	}
}

Array::~Array()
{
	
	while(arr!= NULL)
	{
		delete []arr;
	}
}
