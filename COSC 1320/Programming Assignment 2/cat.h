#ifndef CAT_H				// Include guards that prevent redefinition error
#define CAT_H				// #ifndef checks if it has been defined and #define begins defining
#include "feline.h"			// Include feline header file for inheritance
using namespace std;

// Prototype for cat class that inherits from feline class
class cat :public feline
{
private:
	string name;
public:
	cat();					// Default constructor
	cat(string);			// Constructor that takes a string variable
	string getName();		// Function that returns a string
};

#endif						// Specifies end of the #ifndef