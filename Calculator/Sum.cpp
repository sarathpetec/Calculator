#include "Sum.h"

Sum::Sum(int a, int b) : value1(a), value2(b)
{

}
Sum::~Sum() {
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