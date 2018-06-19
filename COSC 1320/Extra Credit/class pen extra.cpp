#include <iostream>
using namespace std;

class pen						// Prototype for class pen
{
private:						// Private members [can only be used by class]
	int color;
	int l;
public:							// Public members [can be used anywhere]
	pen();   
	pen(int, int);
	void setc(int);				// Set functions assign values to variables
	void setl(int);
	void setall(int, int);
	int getcolor();				// Get functions retrieve value from a class
	int getl();	
	void print();				// Outputs values used in the class
	void writing();				// Writing and pointing are tasks that can be performed by a pen
	void pointing();
};

void main() 
{
		pen p1;					// Calls default constructor that creates the variable of type pen
		pen p2(7, 13);			// Calls constructor that takes arguments and assigns them to the variables
		pen p3(-5, 12);

		p3.setc(10);			// Changes color of variable p3 to 10
		p1.setall(5, 5);		// Changes color and length of p3 to 5 and 5

		p1.print();				
		p2.print();				
		p3.writing();			
		int x = p1.getcolor();	// Retrieves color for p1 and sets it to the variable x
		x++;					// Increments the value of x 
		p1.setc(x);				// Assigns the color of p1 to the updated x
		p1.print();			

		system("pause");
}
// Default constructor that sets color and length to 0 and 1 using the setall function
pen::pen()
{
	setall(0, 1);
}
// Constructor that takes two arguments and sets color and length
pen::pen(int a, int b)
{
	setall(a, b);
}
// Sets color to value provided
void pen::setc(int a)
{		
	if (a < 0)					// Tests if given value is valid
		color = 0;
	else
		color = a;
}
// Sets length too value provided
void pen::setl(int a)			
{
	if (a <= 0)					// Tests if given value is valid
		l = 1;
	else
		l = a;
}
// Sets both color and length to given arguments
void pen::setall(int a, int b)
{
	if (a < 0)					// Tests if given values are valid
		color = 0;
	else
		color = a;
	if (b <= 0)
		l = 1;
	else
		l = b;
}
// Returns value for color
int pen::getcolor()
{
	return color;
}
// Returns value for length
int pen::getl()
{
	return l;
}
// Prints the color and length of the object
void pen::print()
{
	cout << "The color of the pen is " << color << endl;
	cout << "The length of the pen is " << l << endl;
}
// Prints the writing task for a pen
void pen::writing()
{
	cout << "This pen can write with a color of " << color << " and a length of " << l << endl;
}
// Prints the pointing task for a pen
void pen::pointing()
{
	cout << "This pen can point to a screen with a laser" << endl;
}
