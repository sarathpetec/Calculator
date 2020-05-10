#include "Substract.h"


Substract::Substract(int value1, int value2) {
	setValue1(value1);
	setValue2(value2);
}

void Substract::setValue1(int value1) {
	this->value1 = value1;
}

void Substract::setValue2(int value2) {
	(*this).value2 = value2;
}

int Substract::getValue1() {
	return value1;
}
int Substract::getValue2() {
	return value2;
}

int Substract::calculate() {
	int result = getValue1() - getValue2();
	return result;
}
