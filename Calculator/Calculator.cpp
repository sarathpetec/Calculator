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
	ArithmeticEquation<int> *arithmeticEqu;
	switch (operationNumber)
	{
	case 1:
	{

		Sum sum(a, b);
		arithmeticEqu = &sum;
		addValue = arithmeticEqu->calculate();
		break; 
	}
	case 2:
	{
		Substract sub(a,b);
		arithmeticEqu = &sub;
		addValue = arithmeticEqu->calculate();
		break;
	}
	case 3:
	{
		Multiplication mul(a,b);
		arithmeticEqu = &mul;
		addValue = arithmeticEqu->calculate();
		break;
	}
	case 4:
	{
		Division div(a,b);
		arithmeticEqu = &div;
		addValue = arithmeticEqu->calculate();
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