#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double ball_v(float r)
{
	return 4 * M_PI * r * r * r / 3;
}
// ��������� ��� �����
double ball_s(float r)
{
	return 4 * M_PI * r * r;
}
// ��������� ��� �����
float check_input(float a)
{
	while (true)
	{
		while (!(cin >> a) || (cin.get() != '\n'))
		{
			cin.sync();
			cin.clear();
			while (cin.get() != '\n');
			cout << "������� �� �����! ���������� ��� ���\n";
		}
		if (a > 0) break;
		else cout << "������ �� ����� ���� �������������! ���������� ��� ���\n";
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	float r;
	r = NULL;
	cout << "������� ������ ����:\n";
	r = check_input(r);
	cout << "����� ����: " << ball_v(r) << " (���. ��.)" << endl;
	cout << "������� �����: " << ball_s(r) << " (��. ��.)" << endl;
	system("pause");
	return 0;
}