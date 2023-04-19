#include <iostream>
using namespace std;

int main()
{
	int fibonacci[15];

	for (int i = 0; i < 15; i++)
	{
		if (i <= 1)
		{
			fibonacci[i] = i;
		}
		else 
		{
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		cout << fibonacci[i] << endl;
	}

	return 0;
}