#include <iostream>
using namespace std;

long permutasyon (int, int);

int main()
{
	int n, r;
	cout << "permutasyon hesabi icin (n > r olmak uzere) sirasiyla n ve r degerlerini giriniz: ";
	cin >> n >> r;
	cout << n << "'in " << r << "'li permutasyonlari: " << permutasyon(n, r);

	return 0;
}

long permutasyon(int x, int y)
{
	long perm = 1;
	if (x >= y)
	{
		for (int i = x; i > x - y; i--)
		{
			perm *= i;
		}
	}

	else
	{
		cout << y << "degeri," << x << "degerinden buyuk olamaz.";
		system("PAUSE");
	}

	return perm;
}