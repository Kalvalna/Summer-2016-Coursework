#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	ifstream inStream;
	
	inStream.open("infile.txt");

	char next;

	cout << "Outputing numbers in infile.txt using while(!inStream.eof()): \n";
	inStream.get(next);

	while (!inStream.eof())
	{
		cout << next;
		inStream.get(next);
	}

	inStream.close();

	cout << "\nCalculating sum of numbers using while(inStream >> next): \n";
	inStream.open("infile.txt");

	int sum = 0, nextInt;

	inStream >> next;
	while (inStream >> next)
	{
		sum += next;
	}
	cout << "Sum: " << sum << endl;

	inStream.close();

	system("pause");
}