#include "Sum.h"

Sum::Sum(int a, int b) {
	setValue1(a);
	setValue2(b);
}
void Sum::setValue1(int a) {
	value1 = a;
}
void Sum::setValue2(int b) {
	value2 = b;
}
int Sum::getValue1() {
	return value1;
}
int Sum::getValue2() {
	return value2;
}
int Sum::sum() {
	int result = (getValue1() + getValue2());
	return result;
}