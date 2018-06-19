#include "animal.h"				// Include animal header to define functions

int animal::count = 0;			// Initializes the animal count to 0

animal::animal()				// Default constructor that increments the count by 1
{
	count++;
}