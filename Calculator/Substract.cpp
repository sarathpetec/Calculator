#include "Substract.h"


Substract::Substract(int value1, int value2) {
	setValue1(value1);
	setValue2(value2);
}

void Substract::setValue1(int subValue1) {
	value1 = subValue1;
}

void Substract::setValue2(int subValue2) {
	value2 = subValue2;
}

int Substract::getValue1() {
	return value1;
}
int Substract::getValue2() {
	return value2;
}

int Substract::sub() {
	int result = getValue1() - getValue2();
	return result;
}
