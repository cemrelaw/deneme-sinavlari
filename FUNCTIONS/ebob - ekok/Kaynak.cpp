#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int ebob (int, int);
int ekok(int, int);


int main ()
{
	int a, b, c;
	cout << "yapmak istediginiz islemi giriniz. \nebob = 0, ekok = 1" << endl;
	cin >> c;

	if (c == 0)
	{
		cout << "ebobunu hesaplamak istediginiz 2 sayiyi giriniz: ";
		cin >> a >> b;
		cout << "girdiginiz 2 sayinin ebobu: " << ebob(a, b);
	}
	else if (c == 1)
	{
		cout << "ekokunu hesaplamak istediginiz 2 sayiyi giriniz: ";
		cin >> a >> b;
		cout << "girdiginiz 2 sayinin ekoku: " << ekok(a, b);
	}

	else
	{
		cout << "hatali tuslama yaptiniz.";
		system("PAUSE");
	}

	return 0;
}

int ebob (int x, int y)
{
	int ebob = 1;
	for (int i = 2; i <= min(x, y);)
	{

		if ((x % i) == 0 && (y % i) == 0)
		{
			ebob *= i;
			x /= i;
			y /= i;
			i++;
		}
	}

	cout << endl;

	return ebob;
}

int ekok(int x, int y)
{
	int ekok = (x * y) / ebob(x, y);
	cout << endl;

	return ekok;
}