#pragma once
#include "ArithmeticEquation.h"


class Multiplication : public ArithmeticEquation<int> {
private:
	int value1, value2;
public:
	Multiplication(int value1, int value2);
	void setValue1(int a);
	void setValue2(int b);
	int getValue1();
	int getValue2();
	int calculate();
protected:
};