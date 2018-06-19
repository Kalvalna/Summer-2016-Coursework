#include "canine.h"				// Include canine header to define functions

int canine::count = 0;			// Initializes the canine count to 0

canine::canine()				// Default constructor that increments the count by 1
{
	count++;
}
string canine::speak()			// Speak function that returns the string "WOOF"
{
	return "WOOF";
}