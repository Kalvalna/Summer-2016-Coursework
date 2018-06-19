#ifndef FELINE_H				// Include guards that prevent redefinition error
#define FELINE_H				// #ifndef checks if it has been defined and #define begins defining
#include "animal.h"				// Include animal header file for inheritance
using namespace std;

// Prototype for feline class that inherits from animal class
class feline :public animal
{
public:
	static int count;			// Static variable count that counts the number of felines created
	feline();					// Default constructor
	string speak();				// Speak function that returns a string
};

#endif							// Specifies end of the #ifndef