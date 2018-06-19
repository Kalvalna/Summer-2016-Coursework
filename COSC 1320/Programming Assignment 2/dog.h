#ifndef DOG_H					// Include guards that prevent redefinition error
#define DOG_H					// #ifndef checks if it has been defined and #define begins defining
#include "canine.h"				// Include canine header file for inheritance
using namespace std;

// Prototype for dog class that inherits from canine class
class dog :public canine
{
private:
	string name;
public:
	dog();						// Default constructor
	dog(string);				// Constructor that takes a string variable
	string getName();			// Function that returns a string
};

#endif							// Specifies end of the #ifndef