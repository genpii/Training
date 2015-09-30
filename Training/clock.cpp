#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

class timer {
	clock_t start;
public:
	timer();
	~timer();
};

timer::timer()
{
	start = clock();
}

timer::~timer()
{
	clock_t end;
	end = clock();
	cout << "Œo‰ßŽžŠÔ: " << (end - start) / CLOCKS_PER_SEC << "\n";
}

int main()
{
	timer ob;
	char c;

	cout << "enter any key\n";
	cin >> c;

	return 0;
}