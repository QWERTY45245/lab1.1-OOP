#include "IntRange.h"
#include <iostream>
using namespace std;
IntRange makeIntRange(int x, int y, int c)
{
	IntRange range{};
	if (!range.Init(x, y, c))
		cout << "Wrong arguments to Init!" << endl;
	return range;
}
int main()
{
	IntRange c{};
	c.Read();
	c.Display();
	cout << "number  = " << (c.rangeCheck() ? "true" : "false") << endl << endl;
	int x, y, ñ;
	cout << "Input range limits :" << endl;
	cout << " left limit = "; cin >> x;
	cout << " right limit = "; cin >> y;
	cout << " number  = "; cin >> ñ;
	IntRange d = makeIntRange(x, y, ñ);
	d.Display();
	cout << "number  = " << (d.rangeCheck() ? "true" : "false") << endl;
	cin.get();
	return 0;

}