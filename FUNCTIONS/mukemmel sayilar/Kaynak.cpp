#include <iostream>
#include <list>
using namespace std;

int mukemmel_sayilar();

int main()
{

	cout << "1 - 100 arasindaki mukemmel sayilar: " << mukemmel_sayilar();

	return 0;
}

int mukemmel_sayilar()
{
	for (int i = 1; i < 100; i++)
	{
		int toplam = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				toplam += j;
			}
			 
		}
		if (toplam == i)
		{
			cout << toplam;
			cout << endl;
		}
	}

	return 0;
}
