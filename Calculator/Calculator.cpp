#include<iostream>
#include "Sum.h"
#include "Substract.h"
#include "Multiplication.h"
#include "Division.h"
#include "Logger.h"

using namespace std;

int calculator(int a, int b, int operationNumber) {
	int addValue;
	Logger logger;
	Logger *LoggerPointer = &logger;
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
		LoggerPointer->logDataWithNewLine("Operation is not valid...!");
		break;
	}
	return addValue;
}


int main() {
	int a, b, operationNumber, calculateValue;
	Logger logger;
	logger.logDataWithNewLine("Enter First Number");
	cin >> a;
	logger.logDataWithNewLine("Enter Second Number");
	cin >> b;
	logger.logDataWithNewLine("Enter the Operation number need to perform");
	logger.logDataWithNewLine("1. Addition");
	logger.logDataWithNewLine("2. Substraction");
	logger.logDataWithNewLine("3. Multiply");
	logger.logDataWithNewLine("4. Division");
	cin >> operationNumber;
	
	calculateValue = calculator(a, b, operationNumber);
	cout << "Sum of " << a << " and " << b <<" is :: "<< calculateValue <<endl;
}