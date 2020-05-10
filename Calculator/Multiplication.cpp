#include "Multiplication.h"

Multiplication::Multiplication(int value1, int value2) {
	setValue1(value1);
	setValue2(value2);
}
void Multiplication::setValue1(int a) {
	value1 = a;
}
void Multiplication::setValue2(int b) {
	value2 = b;
}
int Multiplication::getValue1() {
	return value1;
}
int Multiplication::getValue2() {
	return value2;
}

int Multiplication::calculate() {
	int result = getValue1() * getValue2();
	return result;
}
