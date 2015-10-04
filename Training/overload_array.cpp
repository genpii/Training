#include "stdafx.h"
#include <iostream>

using namespace std;

class array {
	int nums[10];
public:
	array();
	void set(int n[10]);
	void show();
	array operator+(array ob2);
	array operator-(array ob2);
	int operator==(array ob2);
};

array::array()
{
	int i;
	for (i = 0; i < 10; i++)
		nums[i] = 0;
}

void array::set(int *n)
{
	int i;
	for (i = 0; i < 10; i++)
		nums[i] = n[i];
}

void array::show()
{
	int i;
	for (i = 0; i < 10; i++)
		cout << nums[i] << ' ';

	cout << "\n";
}

array array::operator+(array ob2)
{
	array tmp;
	int i;
	for (i = 0; i < 10; i++)
		tmp.nums[i] = nums[i] + ob2.nums[i];

	return tmp;
}

array array::operator-(array ob2)
{
	array tmp;
	int i;
	for (i = 0; i < 10; i++)
		tmp.nums[i] = nums[i] - ob2.nums[i];

	return tmp;
}

int array::operator==(array ob2)
{
	int i;

	for (i = 0; i < 10; i++)
		if (nums[i] != ob2.nums[i]) return 0;

	return 1;
}


int main()
{
	array o1, o2, o3;
	int i[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	o1.set(i);
	o2.set(i);

	o3 = o1 + o2;
	o3.show();

	o3 = o1 - o3;
	o3.show();

	if (o1 == o2) cout << "o1��o2�͓���\n";
	else cout << "o1��o2�͈قȂ�\n";

	if (o1 == o3) cout << "o1��o3�͓���\n";
	else cout << "o1��o3�͈قȂ�\n";

	return 0;
}