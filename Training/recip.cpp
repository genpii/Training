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

	cout << "x‚Ì’l‚Í " << x << "\n";

	recip(x);

	cout << "‹t”‚Í " << x << "\n";

	return 0;
}