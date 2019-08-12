#include <iostream>

using namespace std;

int main()
{
	int givenNumber, remainder = 0, revNumber = 0;

	cout << "Enter an int: ";
	cin >> givenNumber;

	while(givenNumber != 0)
	{
		remainder = givenNumber % 10;
		revNumber = (revNumber * 10) + remainder;
		givenNumber /= 10;
	}

	cout << "Your Reversed Integer: " << revNumber << endl;
	
	return 0;
}
