#include "feline.h"				// Include feline header to define functions

int feline::count = 0;			// Initializes feline count to 0

feline::feline()				// Default constructor that increments count by 1
{	
	count++;
}
string feline::speak()			// Speak function that returns the string "PURR"
{
	return "PURR";
}