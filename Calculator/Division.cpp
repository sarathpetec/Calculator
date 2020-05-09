#include "Division.h"


Division::Division(int value1, int value2) {
	setValue1(value1);
	setValue2(value2);
}

int Division::getValue1() {
	return this->value1;
}

int Division::getValue2() {
	return this->value2;
}

void Division::setValue1(int value1){
	this->value1 = value1;
}

void Division::setValue2(int value2) {
	this->value2 = value2;
}

int Division::divide() {
	int result = getValue1() / getValue2();
	return result;
}