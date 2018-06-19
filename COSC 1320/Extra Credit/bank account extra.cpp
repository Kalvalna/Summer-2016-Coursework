#include <iostream>
using namespace std;

class CDAccountV1
{
private:
	double balance;
	double interestRate;
	int term;
public:
	CDAccountV1();
	CDAccountV1(double, double, int);
	void setData();
	void setBalance(double);
	void setInterestRate(double);
	void setTerm(int);
	void setall(double, double, int);
	double getBalance();
	double getInterestRate();
	int getTerm();
};

int main()
{
	CDAccountV1 account;
	account.setData();

	double rateFraction, interest;
	rateFraction = account.getInterestRate() / 100.0;
	interest = account.getBalance()*(rateFraction*(account.getTerm() / 12.0));
	account.setBalance(account.getBalance() + interest);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "When your CD matures in "
		<< account.getTerm() << " months,\n"
		<< "it will have a balance of $"
		<< account.getBalance() << endl;
	
	return 0;
}

CDAccountV1::CDAccountV1()
{
	setall(0, 0, 0);
}
CDAccountV1::CDAccountV1(double a, double b, int c)
{
	setall(a, b, c);
}
void CDAccountV1::setData()
{
	double a, b;
	int c;
	cout << "Enter account balance: $";
	cin >> a;
	cout << "Enter account interest rate: ";
	cin >> b;
	cout << "Enter the number of months until maturity: ";
	cin >> c;
	setall(a, b, c);
}
void CDAccountV1::setBalance(double a)
{
	if (a < 0)
		balance = 0;
	else
		balance = a;
}
void CDAccountV1::setInterestRate(double b)
{
	if (b < 0)
		interestRate = 0;
	else
		interestRate = b;
}
void CDAccountV1::setTerm(int c)
{
	if (c < 0)
		term = 0;
	else
		term = c;
}
void CDAccountV1::setall(double a, double b, int c)
{
	if (a < 0)
		balance = 0;
	else
		balance = a;
	if (b < 0)
		interestRate = 0;
	else
		interestRate = b;
	if (c < 0)
		term = 0;
	else
		term = c;
}
double CDAccountV1::getBalance()
{
	return balance;
}
double CDAccountV1::getInterestRate()
{
	return interestRate;
}
int CDAccountV1::getTerm()
{
	return term;
}