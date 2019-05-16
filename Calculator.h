#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Calculator
{
	private: 
	double x, y;
public:
	Calculator();
	double get_x();
	double get_y();
	double adding(double, double);
	double subtraction(double, double);
	double multiplication(double, double);
	double division(double, double);
	double exponentation(double, double);
	
};

