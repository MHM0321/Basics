#include<iostream>
using namespace std;
int main()
{
	int a, b = 0;
	// a is flavours and b is the scoops
	cout << "Select your flavour: 1 for Chocolate, 2 for vanilla and 3 for strawberry " << endl;
	cin >> a;
	if (a == 1)
	{
		cout << "How many scoops of chocolate ?" << endl;
	}
	else if (a == 2)
	{
		cout << "How many scoops of vanilla ?" << endl;
	}
	else if (a == 3)
	{
		cout << "How many scoops of strawberry ?" << endl;
	}
	else
	{
		cout << "Please enter from 1 to 3, we don't have any other flavours" << endl;
	}
	cin >> b;
	cout << "OK, that will be: " << endl;
	if (a == 1)
	{
		cout << (110 * b + 18.7) << endl;
	}
	else if (a == 2)
	{
		cout << (90 * b + 15.3) << endl;
	}
	else if (a == 3)
	{
		cout << (130 * b + 22.1) << endl;
	}

	cout << "including the gst." << endl;

	system("pause");
	return 0;
}