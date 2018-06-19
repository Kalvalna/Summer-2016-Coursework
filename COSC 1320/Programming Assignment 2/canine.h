#ifndef CANINE_H				// Include guards that prevent redefinition error
#define CANINE_H				// #ifndef checks if it has been defined and #define begins defining
#include "animal.h"				// Include animal header file for inheritance
using namespace std;

// Prototype for canine class that inherits from animal class
class canine :public animal
{
public:
	static int count;			// Static variable count that counts the number of canines created
	canine();					// Default constructor
	string speak();				// Speak function that returns a string
};

#endif							// Specifies end of the #ifndef