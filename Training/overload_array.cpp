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
	cout << "n";
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

array array::operator+(array ob2)
{
	
}