/*
	Design Object Oriented application which accept radius from user and
	provides below service as
	1.Calculate area of circle
	2.Calculate Circumference of circle
	We have to design one class for management company which provide
	cleaning and watering service.
	That company charge 10 rupees per square feet for cleaning and 3.5 rupees
	per square feet for watering.
	Provide methods which calculate cleaning and watering charges.
*/

#include<iostream>
#include "StdAfx.h"
using namespace std;

class Circle
{
	protected:
		double redius;
		static const double PI;

	public:
		Circle(double iValue = 0.0)
		{
			redius = iValue;
		}

		void Accept();
		void Display();
		inline double area();
		inline double Circumference();
};
class Maintaince : public Circle
{
	public:
		Maintaince():Circle(0.0)
		{
		}
		int clean();
		double water();
};