// Training.cpp �g���[�j���O�p
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;
	
	cout << "input a and b\n";
	cin >> a >> b;

	c = 1;
	for (; b; b--){
		c = c * a;
	}

	cout << c << "\n";

	// q �ŏI��
	char ch;
	do {
		cin >> ch;
	} while (ch != 'q');

	return 0;
}

