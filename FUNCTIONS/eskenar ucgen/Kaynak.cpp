#include <iostream>
using namespace std;

float eskenar_ucgen(int);

int main()
{
	int h;
	cout << "eskenar ucgenin yuksekligini giriniz: " << endl;
	cin >> h;
	cout << "eskenar ucgenin alani: " << eskenar_ucgen(h);

	return 0;
}

float eskenar_ucgen(int x)
{
	float alan = (x * x * sqrt(3)) / 4;

	return alan;
}