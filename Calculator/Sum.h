#pragma once
#include "ArithmeticEquation.h"

class Sum : public ArithmeticEquation {
private:
	const int value1;
	const int value2;
public: 
	Sum(int value1, int value2);
	~Sum();
	int calculate();
	int getValue1();
	int getValue2();
protected:

};