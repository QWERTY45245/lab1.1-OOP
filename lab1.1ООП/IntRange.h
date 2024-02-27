#pragma once
class IntRange
{
private:
	int first, second, c;
public:
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }
	int GetC() const { return c; }
	void SetFirst(int value) { first = value; }
	void SetSecond(int value) { second = value; }
	void SetC(int value) { c = value; }
	bool Init(int, int, int);
	void Read();
	void Display() const;
	bool rangeCheck() const;

};
