#pragma once
#include "ArithmeticEquation.h"


class Substract : public ArithmeticEquation<int> {

private:
	int value1, value2;
public:
	Substract(int value1, int value2);
	int getValue1();
	void setValue1(int value1);	
	int getValue2();
	void setValue2(int value2);
	int calculate();
protected:

};