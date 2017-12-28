#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double ball_v(float r)
{
	return 4 * M_PI * r * r * r / 3;
}

int main()
{
	setlocale(LC_ALL, "rus");
	float r;
	cout << "Âגוהטעו נאהטףס ראנא:\n";
	cin >> r;
	cout << "Îבתול ראנא: " << ball_v(r) << endl;
	system("pause");
	return 0;
}