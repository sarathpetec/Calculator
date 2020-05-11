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


int getArithmeticEquation() {
	int operationNumber;
	Logger logger;
	logger.logDataWithNewLine("Enter the Operation number need to perform");
	logger.logDataWithNewLine("1. Addition");
	logger.logDataWithNewLine("2. Substraction");
	logger.logDataWithNewLine("3. Multiply");
	logger.logDataWithNewLine("4. Division");
	cin >> operationNumber;
	return operationNumber;
}

bool doYouWantToProcessAgain() {
	Logger logger;
	int userInput = 0;
	logger.logDataWithNewLine("If you want to do the calculation again press 1 otherwise 0");
	cin >> userInput;
	if (userInput == 1)
	{
		return true;
	}
	else {
		return false;
	}
}


int main() {

	int a, b, operationNumber, calculateValue, userInput;
	bool nextProcess = true;
	Logger logger;
	while (nextProcess) {
		logger.logDataWithNewLine("Enter First Number");
		cin >> a;
		logger.logDataWithNewLine("Enter Second Number");
		cin >> b;
		operationNumber = getArithmeticEquation();
		calculateValue = calculator(a, b, operationNumber);
		cout << "Sum of " << a << " and " << b << " is :: " << calculateValue << endl;
		nextProcess = doYouWantToProcessAgain();	
	}
	cin.get();
}


