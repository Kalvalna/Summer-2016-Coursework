#ifndef WOLF_H					// Include guards that prevent redefinition error
#define WOLF_H					// #ifndef checks if it has been defined and #define begins defining
#include "canine.h"				// Include canine header file for inheritance
using namespace std;

// Prototype for wolf class that inherits from canine class
class wolf :public canine
{
public:
	wolf();						// Default constructor
	string howl();				// Howl function that returns a string
};

#endif							// Specifies end of the #ifndef