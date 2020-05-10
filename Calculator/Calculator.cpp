#include<iostream>
#include "Sum.h"
#include "Substract.h"
#include "Multiplication.h"
#include "Division.h"
#include "Logger.h"

using namespace std;

int calculator(int a, int b, int operationNumber) {
	int addValue = 0;
	Logger logger;
	Logger *loggerPointer = &logger;
	switch (operationNumber)
	{
	case 1:
	{

		Sum sum(a, b);
		ArithmeticEquation* ae = &sum;
		addValue = ae->calculate();
		break; 
	}
	case 2:
	{
		Substract sub(a,b);
		addValue = sub.sub();
		break;
	}
	case 3:
	{
		Multiplication mul(a,b);
		addValue = mul.multiply();
		break;
	}
	case 4:
	{
		Division div(a,b);
		addValue = div.divide();
		break;
	}
	default:
		loggerPointer->logDataWithNewLine("Operation is not valid...!");
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
	cin.get();
}