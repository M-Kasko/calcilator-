#include "stdafx.h"
#include "Calculator.h"

void answer (int func_operation)
{	
	double x, y;
	Calculator computing;
	switch (func_operation) 
	{
	case 1:
		cout << "adding " << endl;
		x = computing.get_x();
		y = computing.get_y();
		cout << x << " + " << y << " = "<<endl;
		cout << computing.adding(x,y);
		break;
	case 2:
		cout << "subtraction " << endl;
		x = computing.get_x();
		y = computing.get_y();
		cout << x << " - " << y << " = "<<endl;
		cout << computing.subtraction(x, y);
		break;
	case 3:
		cout << "multiplication" << endl;
		x = computing.get_x();
		y = computing.get_y();
		cout << x << " x " << y << " = "<<endl;
		cout << computing.multiplication(x, y);
		break;
	case 4:
		cout << "division" << endl;
		x = computing.get_x();
		y = computing.get_y();
		cout << x << " : " << y << " = ";
		cout << computing.division(x, y);
		break;
	case 5:
		cout << "exponentation" << endl;
		x = computing.get_x();
		y = computing.get_y();
		cout << x << " ^ " << y << " = "<<endl;
		cout << computing.exponentation(x, y);
		break;
	default:
		cout << "Unknown activity ";
		break;
	}
}

int main() 
{
	int action;
	char do_;
	cout<<"   ************* Console application 'the Simplest calculator' *************    \n"<<endl; 	
	cout << " 1 - if adding " << endl;
	cout << " 2 - if subtraction " << endl;
	cout << " 3 - if multiplication " << endl;
	cout << " 4 - if division " << endl;
	cout << " 5 - if exponentation" << endl;	
	cin >> action;
	cout << endl;

	answer (action);
	cout<<endl;
	cout << " Put 'y' if you want to do it again. If not , enter any other symbol " << endl;
	cin>>do_;
	if(do_== 'y')
		answer (action);
	
}