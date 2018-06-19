#ifndef ANIMAL_H					// Include guards that prevent redefinition error
#define ANIMAL_H					// #ifndef checks if it has been defined and #define begins defining
#include <string>
using namespace std;

// Prototype for animal class
class animal						
{
public:
	static int count;				// Static variable count that counts the number of animals created
	animal();						// Default constructor
	virtual string speak() = 0;		// Pure virtual function that returns a string
};

#endif								// Specifies end of the #ifndef