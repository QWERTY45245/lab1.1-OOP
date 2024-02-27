#include "IntRange.h"
#include <iostream>
using namespace std;
bool IntRange::Init(int x, int y, int c)
{
	if (x < y && x <= c && c < y)
	{
		first = x;
		second = y;
		this->c = c;
		return true;
	}
	else
	{
		return false;
	}
}
void IntRange::Read()
{
	do
	{
		cout << "Input range limits :" << endl;
		cout << " left limit = "; cin >> first;
		cout << " right limit = "; cin >> second;
		cout << " number  = "; cin >> c;
	} while (!Init(first, second, c));
}
void IntRange::Display() const
{
	cout << endl;
	
}
bool IntRange::rangeCheck() const
{
	if (c >= first && c < second)
	{
		return true;
	}
	else {
		return false;
	}
}