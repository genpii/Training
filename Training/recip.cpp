#include "stdafx.h"
#include <iostream>

using namespace std;

void recip(double &d)
{
	d = 1 / d;
}

int main()
{
	double x = 200.0;

	cout << "x�̒l�� " << x << "\n";

	recip(x);

	cout << "�t���� " << x << "\n";

	return 0;
}