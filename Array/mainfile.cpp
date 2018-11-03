#include"myheader.h"

int main()
{
	
	int iSize = 0;
	int index = 0, iValue = 0;
	cout<<endl<<"Enter the size of array"<<endl;
	cin>>iSize;

    Array *ptr = new Array(iSize);
	ptr->Accept();
	ptr->Display();
	

	cout<<"\n"<<"Ente the Number get data"<<endl;
	cin>>index;
	cout<<ptr->GetData(index);

	cout<<endl<<"Enter the iValue"<<endl;
	cin>>iValue;
	cout<<endl<<"Enter the Position"<<endl;
	cin>>index;

	ptr->SetData(iValue,index);
	ptr->Display();
	
	ArraySearch obj2(5);
	obj2.Accept();
	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	
	cout<<endl<<"Enter the Occurance Number"<<endl;
	int iNo = 0;
	cin>>iNo;

	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	cout<<endl<<"Occurence Number is \t"<<obj2.SearchFirst(iNo)<<endl;
	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	return 0;
}