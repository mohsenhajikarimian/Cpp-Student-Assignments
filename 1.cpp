#include <iostream>

using namespace std;

int main()
{
	int inputNumber, inputBase, targetBase, digit, factor, decimalNumber, targetNumber = 0;

	cout << "Enter input number : " << endl;
	cin >> inputNumber;
	cout << "Enter input base : " << endl;
	cin >> inputBase;
	cout << "Enter target base : " << endl;
	cin >> targetBase;

	// convert input number to decimal number.
	factor = 1;
	if (inputBase != 10)
	{
		decimalNumber = 0;
		while (inputNumber != 0)
		{
			digit = inputNumber % 10;
			inputNumber = inputNumber / 10;
			decimalNumber = decimalNumber + factor * digit;
			factor = factor * inputBase;
		}
	}
	else
	{
		decimalNumber = inputNumber;
	}

	// input number is decimal, now!
	factor = 1;
	while (decimalNumber != 0)
	{
		digit = decimalNumber % targetBase;
		decimalNumber = decimalNumber / targetBase;
		targetNumber = targetNumber + factor * digit;
		factor = factor * 10;
	}

	cout << "Target number is : " << endl
	     << targetNumber << endl;

	return 1;
}
