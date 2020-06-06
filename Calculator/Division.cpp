#include "Division.h"
#include "Logger.h"


Division::Division(float value1, float value2) {
	setValue1(value1);
	setValue2(value2);
}

float Division::getValue1() {
	return this->value1;
}

float Division::getValue2() {
	return this->value2;
}

void Division::setValue1(float value1){
	this->value1 = value1;
}

void Division::setValue2(float value2) {
	this->value2 = value2;
}

float Division::calculate() {
	float result{ 0 };
	try {
		if (getValue2() == 0) {
			throw std::runtime_error("Divide by zero Exception");
		}
		return getValue1() / getValue2();
	}
	catch (const std::runtime_error& e) {
		Logger logger;
		logger.logDataWithNewLine(e.what());
	}
	return result;
}