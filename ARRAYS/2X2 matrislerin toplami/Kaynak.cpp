#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int A[2][2], B[2][2], C[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "A matrisi" << i << "-" << j << ":";
			cin >> A[i][j];
		}
	}

	cout << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "B matrisi" << i << "-" << j << ":";
			cin >> B[i][j];
		}
	}

	cout << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}