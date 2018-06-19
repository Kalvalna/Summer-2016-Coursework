#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	ifstream inStream;
	ofstream outStream;
	string line;

	inStream.open("infile.txt");
	if (inStream.fail())
	{
		cout << "Error opening file." << endl;
		exit(1);
	}

	outStream.open("outfile.txt");
	if (outStream.fail())
	{
		cout << "Error opening file." << endl;
		exit(1);
	}

	while (!inStream.eof())
	{
		getline(inStream, line);
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
			{
				line[i] = 'v';
			}
			else if (line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
			{
				line[i] = 'V';
			}
		}
		outStream << line << endl;
	}
	
	inStream.close();
	outStream.close();
}