#include<iostream>
#include "Sum.cpp"
#include "Substract.cpp"
#include "Multiplication.cpp"
#include "Division.cpp"
#include "Logger.h"

using namespace std;

int calculator(int a, int b, int operationNumber) {
	int addValue;
	switch (operationNumber)
	{
	case 1:
		Sum sum;
		addValue = sum.sum(a, b);
		break;
	case 2:
		Substract sub;
		addValue = sub.sub(a, b);
		break;
	case 3:
		Multiplication mul;
		addValue = mul.multiply(a, b);
		break;
	case 4:
		Division div;
		addValue = div.divide(a, b);
		break;
	default:
		break;
	}
	return addValue;
}


int main() {
	int a, b, operationNumber, calculateValue;
	
	Logger::logDataWithNewLine("Enter First Number");
	cin >> a;
	Logger::logDataWithNewLine("Enter Second Number");
	cin >> b;
	Logger::logDataWithNewLine("Enter the Operation number need to perform");
	Logger::logDataWithNewLine("1. Addition");
	Logger::logDataWithNewLine("2. Substraction");
	Logger::logDataWithNewLine("3. Multiply");
	Logger::logDataWithNewLine("4. Division");
	cin >> operationNumber;
	
	calculateValue = calculator(a, b, operationNumber);
	cout << "Sum of " << a << " and " << b <<" is :: "<< calculateValue <<endl;
}