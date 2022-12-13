#include <iostream>
#include <fstream>
#include <string>

int main()
{
	int largest = 0;
	int tempInt = 0;
	std::ifstream input("input.txt");
	std::string tempString;
	
	if (!input.is_open())
	{
		std::cout << "File not open\n";
	}

	while (input.good())
	{
		tempString += input.get();
		if (tempString.back() == '\n')
		{	
			if (tempString.front() != '\n')
			{
				tempInt += stoi(tempString);
			} else {
				if (tempInt > largest) 
				{
					largest = tempInt;
				}
				tempInt = 0;
			}
			tempString = "";
		}
	}
	std::cout << largest << '\n';
}

