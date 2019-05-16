#include "stdafx.h"
#include "Calculator.h"


Calculator::Calculator(void)
{	
	cout << "Select operation " << endl;
		x = 0;
		y = 0;
}

double Calculator::get_x()
{
	double x;
	cout << " 1st number: " << endl;
	cin >> x;
	return x;
}

double Calculator::get_y()
{
	double y;
	cout << "2d number: " << endl;
		cin >> y;
		return y;
}

double Calculator::adding(double x,  double y) 
{
	double result = x + y;
	return result;
}

double Calculator::subtraction( double x, double y ) 
{
	double result = x - y;
	return result;
}

double Calculator::multiplication(double x, double y)
{
	double result = x * y;
	return result;
}

double Calculator::division(double x, double y) 
{
	if (y == 0) 
	{
		cout << "Error " << endl;
		exit(0);
	}

	double result = x / y;
	return result;
}

double Calculator::exponentation(double  x, double y) 
{
	double result = pow(x,y);
	return result;
}

