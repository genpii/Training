#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

class prompt {
	int count;
public:
	prompt(char *in);
	~prompt();
};

prompt::prompt(char *in)
{
	cout << in;
	cin >> count;
}

prompt::~prompt()
{
	int i, j;
	for (i = 0; i < count; i++) {
		Beep(13000, 1000);
		//for (j = 0; j < 100000; j++);
	}
}

int main()
{
	prompt p("input number: ");

	return 0;
}