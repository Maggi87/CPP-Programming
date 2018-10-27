
#include"myheader.h"

int main()
{
	QUEUE obj1;

	obj1.enqueue(100);
	obj1.enqueue(101);
	obj1.enqueue(102);
	obj1.enqueue(103);
	obj1.enqueue(104);
	obj1.display();

	cout<<endl;
	cout<<obj1.delqueue();
	obj1.display();
	
	return 0;
}