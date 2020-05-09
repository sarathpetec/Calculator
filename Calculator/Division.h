#pragma once

class Division {
private:
	int value1, value2;
public:
	Division(int value1, int value2);
	void setValue1(int a);
	void setValue2(int b);
	int getValue1();
	int getValue2();
	int divide();
protected:
};