#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	double num, den;
	cout << "Fraction to Decimal Converter (up to 4 digits)" << endl;
	try
	{
		cout << "Enter a numerator: ";
		cin >> num;
		cout << "Enter a denominator: ";
		cin >> den;
		if (den == 0)
		{
			throw "Error. Cannot divide by zero";
		}
		else
		{
			cout << num << "/" << den << " = " << setprecision(4) << num / den << endl;
		}
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
	system("pause");
}