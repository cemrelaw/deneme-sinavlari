#include <iostream>
using namespace std;

int toplam();

int main()
{
	cout << "girilen 10 sayinin toplamini bulan fonksiyon: " << endl;
	cout << "bu sayilarin toplami: " << toplam();

	return 0;
}

int toplam()
{
	int sayi[10], toplam = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". sayiyi giriniz: ";
		cin >> sayi[i];
		toplam += sayi[i];

	}
	cout << endl;
	return toplam;
}