#include <iostream>
using namespace std;

// Prototype for class time
class time
{
	friend istream & operator >>(istream &input, time &x);		// Friend >> and << operator functions to use private members
	friend ostream & operator <<(ostream &output, time &x);
private:														// Declare private variables
	int hour;
	int minute;
	int sec;
public:															// Declare public functions
	time();														// Default Constructor
	time(int, int, int);										// Constructor that takes 3 arguments
	void setall(int, int, int);									// Sets variables to the 3 arguments
	int getHour();												// Returns indicated variables
	int getMin();
	int getSec();
	long int inSeconds();										// Returns time in seconds
	time operator+(time);										// Changes function of + operator
	time operator*(time);										// Changes function of * operator
	void printstandard();										// Prints time in Hour:Min
	void printm();												// Prints time in Hour:Min:Sec AM/PM
};
istream & operator >>(istream &input, time &x)					// Defines operator >> function change to take input and assign to the variables
{
	cout << "Hours: ";
	input >> x.hour;
	cout << "Minutes: ";
	input >> x.minute;
	cout << "Seconds: ";
	input >> x.sec;
	if (x.sec >= 60)											// Testing for valid data
	{
		x.minute = x.minute + (x.sec / 60);
		x.sec = x.sec % 60;
	}
	if (x.minute >= 60)
	{
		x.hour = x.hour + (x.minute / 60);
		x.minute = x.minute % 60;
	}
	if (x.hour >= 24)
	{
		x.hour = x.hour % 24;
	}
	return input;
}
ostream & operator <<(ostream &output, time &x)					// Prints details of the object
{
	output << x.hour << " hour(s)\n";
	output << x.minute << " minute(s)\n";
	output << x.sec << " second(s)\n";
	return output;
}
time time::operator+(time x)									// Adds input number of minutes to the time and returns result
{
	if (minute + x.minute >= 60)								// Testing for valid data
	{
		hour = hour + ((x.minute + minute) / 60);
		minute = (minute + x.minute) % 60;
	}
	else
		minute = minute + x.minute;
	if (hour + x.hour >= 24)
	{
		hour = (hour + x.hour) % 24;
	}
	else
	{
		hour = hour + x.hour;
	}
	return *this;
}
time time::operator*(time x)									// Adds double the amount of the input number to the original time and returns result
{
	if (minute + (x.minute * 2) >= 60)							// Testing for valid data
	{
		hour = hour + ((x.minute * 2 + minute) / 60);
		minute = (minute + x.minute) % 60;
	}
	else
		minute = minute + x.minute * 2;
	if (hour + x.hour >= 24)
	{
		hour = (hour + x.hour) % 24;
	}
	else
	{
		hour = hour + x.hour;
	}
	return *this;
}
void diff(time a, time b)										// Calculates the difference between two times
{
	int tempHour, tempMin, tempSec;								// Declare temporary variables
	if (a.getHour() == b.getHour())								// If-else statements to determine time difference
	{
		tempHour = 0;
		if (a.getMin() == b.getMin())
		{
			tempMin = 0;
			if (a.getSec() == b.getSec())
			{
				tempSec = 0;
			}
			else if (a.getSec() < b.getSec())
			{
				tempSec = b.getSec() - a.getSec();
			}
			else
			{
				tempSec = a.getSec() - b.getSec();
			}
		}
		else if (a.getMin() < b.getMin())
		{
			if (a.getSec() == b.getSec())
			{
				tempSec = 0;
				tempMin = b.getMin() - a.getMin();
			}
			else if (a.getSec() < b.getSec())
			{
				tempSec = b.getSec() - a.getSec();
				tempMin = b.getMin() - a.getMin();
			}
			else
			{
				tempSec = (b.getSec() + 60) - a.getSec();
				tempMin = b.getMin() - a.getMin() - 1;
			}
		}
		else
		{
			if (a.getSec() == b.getSec())
			{
				tempSec = 0;
				tempMin = a.getMin() - b.getMin();
			}
			else if (a.getSec() < b.getSec())
			{
				tempSec = (a.getSec() + 60) - b.getSec();
				tempMin = a.getMin() - b.getMin() - 1;
			}
			else
			{
				tempSec = a.getSec() - b.getSec();
				tempMin = a.getMin() - b.getMin();
			}
		}
	}
	else if (a.getHour() > b.getHour())
	{
		if (a.getSec() == b.getSec())
		{
			tempSec = 0;
			tempMin = 0;
		}
		else if (a.getSec() < b.getSec())
		{
			tempSec = (a.getSec() + 60) - b.getSec();
			tempMin = -1;
		}
		else
		{
			tempSec = a.getSec() - b.getSec();
			tempMin = 0;
		}
		if (a.getMin() + tempMin < b.getMin())
		{
			tempMin = tempMin + (a.getMin() + 60) - b.getMin();
			tempHour = -1;
		}
		else
		{
			tempMin = tempMin + a.getMin() - b.getMin();
			tempHour = 0;
		}
		tempHour = tempHour + a.getHour() - b.getHour();
	}
	else 
	{
		if (a.getSec() == b.getSec())
		{
			tempSec = 0;
			tempMin = 0;
		}
		else if (b.getSec() < a.getSec())
		{
			tempSec = (b.getSec() + 60) - a.getSec();
			tempMin = -1;
		}
		else
		{
			tempSec = b.getSec() - a.getSec();
			tempMin = 0;
		}
		if (b.getMin() + tempMin < a.getMin())
		{
			tempMin = tempMin + (b.getMin() + 60) - a.getMin();
			tempHour = -1;
		}
		else
		{
			tempMin = tempMin + b.getMin() - a.getMin();
			tempHour = 0;
		}
		tempHour = tempHour + b.getHour() - a.getHour();
	}
	cout << "The time difference is " << tempHour << " hour(s), " << tempMin << " minute(s), and " << tempSec << " seconds.\n";
}
void main()
{
	time T1, T3;														// Creates two objects of type time
	cin >> T1;															// Calls >> operator function to assign values to the object's variables
	T1.printm();
	T1.printstandard();

	T3 = T1;															// Copies T1 to T3

	int min;
	cout << "Minutes to add: ";
	cin >> min;						
	time T2(0, min, 0);
	T1 = T1 + T2;														// Adds T2 to T1
	T1.printm();
	T1.printstandard();

	cout << "Adding 2 times the amount of minutes: \n";
	T1 = T1 * T2;
	T1.printm();
	T1.printstandard();

	diff(T1, T3);

	cout << "Time:\n";
	cout << T1;
	cout << "Time in seconds: " << T1.inSeconds() << endl;
}
time::time()														// Default constructor that sets all variables to 0
{
	setall(0, 0, 0);
}
time::time(int a, int b, int c)										// Constructor that takes 3 arguments and sets the variables accordingly
{
	setall(a, b, c);
}
void time::setall(int a, int b, int c)								// Sets all variables based on the 3 arguments
{
	if (c >= 60)													// Testing for valid data
	{
		sec = c % 60;
		minute = c / 60;
	}
	else
	{
		sec = c;
		minute = 0;
	}
	if (minute + b >= 60)
	{
		hour = (minute + b) / 60;
		minute = (minute + b) % 60;
	}
	else
	{
		minute = minute + b;
		hour = 0;
	}
	if (hour + a >= 24)
	{
		hour = (hour + a) % 24;
	}
	else
	{
		hour = hour + a;
	}
}
int time::getHour()														// Returns the hour variable of the object
{
	return hour;
}
int time::getMin()														// Returns the minute variable of the object
{
	return minute;
}
int time::getSec()														// Returns the sec variable of the object
{
	return sec;
}
long int time::inSeconds()												// Converts and returns the time in seconds
{
	return (hour * 3600) + (minute * 60) + sec;
}
void time::printstandard()												// Prints time in Hour:Minute 
{
	cout << "Time is: " << hour << ":" << minute << endl;
}
void time::printm()														// Prints time in Hour:Minute:Second AM/PM
{
	if (hour > 12)														// Tests if hour is in PM
	{
		cout << "Time is: " << hour - 12 << ":" << minute << ":" << sec << " PM" << endl;
	}
	else																// Else hour is AM
	{
		cout << "Time is: " << hour << ":" << minute << ":" << sec << " AM" << endl;
	}
}