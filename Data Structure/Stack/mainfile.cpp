
#include"myheader.h"

int main()
{
	Stack obj1;

	obj1.push(100);
	obj1.push(101);
	obj1.push(102);
	obj1.push(103);
	obj1.display();

	cout<<endl;
	cout<<obj1.pop();
	cout<<obj1.peep();
	return 0;
}