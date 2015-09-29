// Training.cpp トレーニング用
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void rev_str(char *st);
void rev_str(char *in, char *out);

int _tmain(int argc, _TCHAR* argv[])
{
	char s1[80], s2[80];

	strcpy(s1, "This is a test");
	
	rev_str(s1);
	cout << s1 << "\n";

	rev_str(s1, s2);
	cout << s1 << " " << s2 << "\n";

	// q で終了
	char ch;
	do {
		cin >> ch;
	} while (ch != 'q');

	return 0;
}

void rev_str(char *st)
{
	char temp[80];
	int i, j;

	for (i = strlen(st) - 1, j = 0; i >= 0; i--, j++)
		temp[j] = st[i];

	temp[j] = '\0';

	strcpy(st, temp);
}

void rev_str(char *in, char *out)
{
	int i, j;

	for (i = strlen(in) - 1, j = 0; i >= 0; i--, j++)
		out[j] = in[i];

	out[j] = '\0';
}

