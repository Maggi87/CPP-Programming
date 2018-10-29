/*
	Design Object Oriented application which accept radius from user and provides below service as
	1.Calculate area of circle
	2.Calculate Circumference of circle
	We have to design one class for management company which provide cleaning and watering service.
	That company charge 10 rupees per square feet for cleaning and 3.5 rupees per square feet for watering.
	Provide methods which calculate cleaning and watering charges.
*/
#include"myheader.h"
int Maintaince :: clean()
{
	double iResult = 0.0;
	iResult = area();
	iResult = (int)iResult * 10;
	return iResult;
}
double Maintaince :: water()
{
	double iResult = 0.0;
	iResult = area();
	iResult = iResult * 3.5;
	return iResult;
}
const double Circle::PI = 3.14;

void Circle::Accept()
{
	cout<<endl<<"Enter the Redius"<<endl;
	cin>>redius;
}
void Circle::Display()
{
	cout<<"Redius is"<<redius;
}
double Circle::area()
{
	double iResult = 0.0;
	iResult = PI * redius * redius;
	return iResult;
}
double Circle::Circumference()
{
	double iResult = 0.0;
	iResult = 2 * PI * redius;
	return iResult;
}