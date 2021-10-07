#include <iostream>

using namespace std;

int main()
{
	char whichPackage;
	int howManyJams = 0;
	int monthlyFee = 0;
	int jamsIncluded = 0;
	int jamPrice = 0;
	int totalCost;

	cout << "Which package do you own? A, B, or C: ";
	cin >> whichPackage;
	cout << "How many jams, jellies or preserves did you purchase this month? ";
	cin >> howManyJams;

	if (whichPackage == 'A' || whichPackage == 'a')
	{
		monthlyFee = 8;
		jamsIncluded = 2;
		jamPrice = 5;
	}
	else if (whichPackage == 'B' || whichPackage == 'b')
	{
		monthlyFee = 12;
		jamsIncluded = 4;
		jamPrice = 4;
	}
	else if (whichPackage == 'C' || whichPackage == 'c')
	{
		monthlyFee = 15;
		jamsIncluded = 6;
		jamPrice = 3;
	}
	else
	{
		cout << "Please select A, B or C" << endl;
	}

	//calculate total cost

	if (howManyJams <= jamsIncluded)
	{
		//just charge the monthly fee
		totalCost = monthlyFee;
	}

	else
	{
		//charge monthly fee + the difference of the jams purchased * the jams price
		totalCost = monthlyFee + (howManyJams - jamsIncluded) * jamPrice;
	}

	cout << "You owe $" << totalCost << ".00" <<endl;
	return 0;
}