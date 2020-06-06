#pragma once
#include "ArithmeticEquation.h"


class Division : public ArithmeticEquation<float> {
private:
	float value1, value2;
public:
	Division(float value1, float value2);
	void setValue1(float a);
	void setValue2(float b);
	float getValue1();
	float getValue2();
	float calculate();
protected:
};