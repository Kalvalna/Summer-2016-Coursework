#include "dog.h"			// Include dog header to define functions

dog::dog()					// Default constructor that assigns "dog" to the variable name
{
	name = "dog";
}
dog::dog(string a)			// Constructor that takes a string and sets it to the variable name
{
	name = a;
}
string dog::getName()		// Function that returns the name
{
	return name;
}