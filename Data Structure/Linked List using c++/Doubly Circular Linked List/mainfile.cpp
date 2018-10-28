#include"myheader.h"

int main()
{
	Doubly_Circular obj1;

	cout<<"Insert First"<<endl;
	obj1.InsertFirst(10);
	obj1.InsertFirst(11);
	obj1.InsertFirst(12);

	
	obj1.Displayf();
	cout<<endl;
	obj1.Displayb();
	cout<<endl;

	cout<<"Insert Last"<<endl;
	obj1.InsertLast(21);
	obj1.InsertLast(22);
	
	obj1.Displayf();
	cout<<endl;
	obj1.Displayb();
	cout<<endl;

	cout<<"Insert At Pos"<<endl;
	obj1.InsertAtPos(101,4);
	obj1.InsertAtPos(102,3);

	obj1.Displayf();
	cout<<endl;
	obj1.Displayb();
	cout<<endl;

	cout<<"Delete First"<<endl;
	obj1.DeleteFirst();
	obj1.Displayf();
	cout<<endl;
	obj1.Displayb();
	cout<<endl;

	cout<<"Delete Last"<<endl;
	obj1.DeleteLast();
	obj1.Displayf();
	cout<<endl;
	obj1.Displayb();
	cout<<endl;

	cout<<"Delete at Pos 3"<<endl;
	obj1.DeleteAtPos(3);
	obj1.Displayf();
	cout<<endl;
	obj1.Displayb();
	cout<<endl;

	cout<<"Number of node"<<"\t";
	cout<<obj1.Count();

	return 0;
}