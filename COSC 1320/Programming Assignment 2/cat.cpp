#include "cat.h"			// Include cat header to define functions

cat::cat()					// Default constructor that assigns "cat" to the variable name
{
	name = "cat";
}
cat::cat(string a)			// Constructor that takes a string and sets it to the variable name
{
	name = a;
}
string cat::getName()		// Function that returns the name 
{
	return name;
}