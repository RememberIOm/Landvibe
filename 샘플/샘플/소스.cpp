#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < a; i++)
	{
		cout << "*";
	}
	cout << "\n";

	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - i - 1; j++)
		{
			cout << "*";
		}
		if (i != a - 2)
		{
			cout << "\n";
		}
	}

	return 0;
}