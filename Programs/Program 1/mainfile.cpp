/*
	Design Object Oriented application which accept radius from user and provides below service as
	1.Calculate area of circle
	2.Calculate Circumference of circle
	We have to design one class for management company which provide cleaning and watering service.
	That company charge 10 rupees per square feet for cleaning and 3.5 rupees per square feet for watering.
	Provide methods which calculate cleaning and watering charges.
*/
#include"myheader.h"

int main()
{
	Circle obj1;

	obj1.Accept();
	obj1.Display();
	
	cout<<endl<<"Area of Circle:"<<obj1.area()<<endl;

	cout<<endl<<"Area of Circumference:"<<obj1.Circumference()<<endl;

	Maintaince obj2;
	obj2.Accept();
	cout<<"Cleaning Charge : "<<obj2.clean()<<endl;
	cout<<"Water Charges :"<<obj2.water()<<endl;	
	obj2.Display();
	return 0;
}