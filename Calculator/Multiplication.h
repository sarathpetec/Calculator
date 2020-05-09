#pragma once

class Multiplication {
private:
	int value1, value2;
public:
	Multiplication(int value1, int value2);
	void setValue1(int a);
	void setValue2(int b);
	int getValue1();
	int getValue2();
	int multiply();
protected:
};