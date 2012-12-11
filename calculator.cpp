#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int y = 0;
int x = 1;
int secondary;
int neededSum;
int storedX;
int storedY;

void myFactors();

int main()
{

	string answer;
	
	while (answer != "no")
	{
		y = 0;
		x = 1;

		// Gets the product that is used to get the factors
		cout << "Enter a number that you want to be factored" << endl;
		cin >> y;

		system("cls");
	
		// Gets the sum from the user that the two factors need to add up to
		cout << "Input the sum that is needed" << endl;
		cin >> neededSum;

		secondary = y;
		system("cls");

		// Lists the factors that add up to the specified sum
		cout << "The factors of " << secondary << " are:" << endl << endl;
		myFactors();

		// Lists the factors that add up to the correct sum
		cout << endl << "The factors that add up to " << neededSum << " are" << endl;
		cout << endl << storedX << " and " << storedY << endl << endl;

		while (answer != "yes" | answer != "no")
		{
			cout << "Would you like to do another calulation?" << endl;
			cin >> answer;
			transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			if (answer == "yes")
			{
				system("cls");
				break;
			}
			if (answer == "no")
			{
				break;
			}
		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}

void myFactors()
{
	int product = x * y;
	int sum;
	int increment = 0;

	for (int i = 0; i < 100; i++)
	{
		x++;
		increment++;
		y = secondary / x;
		product = x * y;
		if (product == secondary)
		{
			sum = x + y;
			if (sum == neededSum)
			{
				storedX = x;
				storedY = y;
			}
			else if (-sum == neededSum)
			{
				storedX = -x;
				storedY = -y;
			}
			cout << x << " and " << y << endl;
		}
	}
}