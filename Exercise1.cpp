#include <iostream>
using namespace std;
double sumTwoNumbers(double, double);
double areaOfCircle(double);
double circumferenceOfCircle(double);
double priceIncludingVAT(double, int);
int main()
{
	int choice=1;
	while (choice != 5)
	{
		cout << "\tMenu" << endl;
		cout << "1) Sum two numbers" << endl;
		cout << "2) Calculate area of a circle" << endl;
		cout << "3) Calculate circumference of a circle" << endl;
		cout << "4) Calculate price with VAT" << endl;
		cout << "5) Exit" << endl;
		cout << "Enter your choice:";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
		{
		double num1, num2;
		cout << "Enter two numbers:";
		cin >> num1 >> num2;
		cout << "The result is:" << sumTwoNumbers(num1, num2) << endl;
		break;
		}	
		case 2:
		{
		double radius;
		cout << "Enter the value of radius:";
		cin >> radius;
		cout <<"The result is:" << areaOfCircle(radius) << endl;
		break;
		}	
		case 3:
		{
		double radius;
		cout << "Enter the value of radius:";
		cin >> radius;
		cout <<"The result is:" << circumferenceOfCircle(radius) << endl;
		break;
		}
		case 4:
		{
		double price;
		int vat;
		cout << "Enter value of price and VAT percentage:";
		cin >> price >> vat;
		cout <<"The result is:" << priceIncludingVAT(price, vat) << endl;
		break;
		}
		case 5:
		{
		cout <<"Goodbye";
		break;
		}
		default:
		{
		cerr << "Wrong number"<<endl;
		}
		}
	}
	return 0;
}
double sumTwoNumbers(double num1, double num2)
{
	return num1 + num2;
}
double areaOfCircle(double radius)
{
	if (radius < 0)
	{
		while (radius < 0)
		{
			cout << "Wrong value of radius,try again:";
			cin >> radius;
		}
	}
	return 3.14 * (pow(radius, 2));
}
double  circumferenceOfCircle(double radius)
{
	if (radius < 0)
	{
		while (radius < 0)
		{
			cout << "Wrong value of radius,try again:";
			cin >> radius;
		}
	}
	return 3.14 * (2*radius);
}
double priceIncludingVAT(double price, int vat)
{
	if (price < 0 || vat < 0)
	{
		while (price < 0 || vat < 0)
		{
			cout << "Wrong value of price and/or VAT,try again:";
			cin >> price >> vat;
		}
	}
	return price + (price * vat / 100);
}
//Lab0 for SDTfDT