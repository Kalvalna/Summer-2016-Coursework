#include <iostream>
using namespace std;

class DayOfYear
{
private:
	int month;
	int day;
public:
	DayOfYear();
	void setDate();
	void output();
	void isBirthday(DayOfYear);
};

int main()
{
	DayOfYear today, birthday;

	cout << "Enter today's date:\n";
	today.setDate();

	cout << "Enter your birthday:\n";
	birthday.setDate();

	cout << "Today's date is ";
	today.output();

	cout << "Your birthday is ";
	birthday.output();

	birthday.isBirthday(today);

	return 0;
}
DayOfYear::DayOfYear()
{
	month = 1;
	day = 1;
}
void DayOfYear::setDate()
{
	cout << "Enter month as a number: ";
	cin >> month;
	if (month < 1 || month > 12)
		month = 1;
	cout << "Enter the day of the month: ";
	cin >> day;
	if (day < 1 || day > 31)
		day = 1;
}
void DayOfYear::output()
{
	switch (month)
	{
	case 1:
		cout << "January ";
		break;
	case 2:
		cout << "February ";
		break;
	case 3:
		cout << "March ";
		break;
	case 4:
		cout << "April ";
		break;
	case 5:
		cout << "May ";
		break;
	case 6:
		cout << "June ";
		break;
	case 7:
		cout << "July ";
		break;
	case 8:
		cout << "August ";
		break;
	case 9:
		cout << "September ";
		break;
	case 10:
		cout << "October ";
		break;
	case 11:
		cout << "November ";
		break;
	case 12: 
		cout << "December ";
		break;
	default:
		cout << "Error";
		break;
	}
	cout << day << endl;
}
void DayOfYear::isBirthday(DayOfYear x)
{
	if (month == x.month && day == x.day)
		cout << "Happy Birthday!\n";
	else
		cout << "Happy Unbirthday!\n";
}