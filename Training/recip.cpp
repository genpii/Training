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

	cout << "xの値は " << x << "\n";

	recip(x);

	cout << "逆数は " << x << "\n";

	return 0;
}