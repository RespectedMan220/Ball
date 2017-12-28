#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double ball_v(float r)
{
	return 4 * M_PI * r * r * r / 3;
}
// изменение для друга
double ball_s(float r)
{
	return 4 * M_PI * r * r;
}
// изменение для друга
float check_input(float a)
{
	while (true)
	{
		while (!(cin >> a) || (cin.get() != '\n'))
		{
			cin.sync();
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введено не число! Попробуйте еще раз\n";
		}
		if (a > 0) break;
		else cout << "Радиус не может быть отрицательным! Попробуйте еще раз\n";
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	float r;
	r = NULL;
	cout << "Введите радиус шара:\n";
	r = check_input(r);
	cout << "Объем шара: " << ball_v(r) << " (куб. ед.)" << endl;
	cout << "Площадь сферы: " << ball_s(r) << " (кв. ед.)" << endl;
	system("pause");
	return 0;
}