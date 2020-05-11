#include<iostream>
#include <algorithm>
#include <string>
#include "Sum.h"
#include "Substract.h"
#include "Multiplication.h"
#include "Division.h"
#include "Logger.h"
#include <unordered_map>

using namespace std;

/*Method Prototype*/
int getArithmeticEquation();
bool doYouWantToProcessAgain();
unordered_map<int, string> updateMap();

/*Global variable declaration*/
unordered_map <int, string> operations;

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
	bool nextProcess = true;
	Logger logger;
	while (nextProcess) {
		logger.logDataWithNewLine("Enter First Number");
		cin >> a;
		logger.logDataWithNewLine("Enter Second Number");
		cin >> b;
		operationNumber = getArithmeticEquation();
		calculateValue = calculator(a, b, operationNumber);
		cout << operations[operationNumber] <<" of " << a << " and " << b << " is :: " << calculateValue << endl;
		nextProcess = doYouWantToProcessAgain();	
	}
	cin.get();
}

int getArithmeticEquation() {
	int operationNumber;
	Logger logger;
	operations = updateMap();
	logger.logDataWithNewLine("Enter the Operation number need to perform");
	for (pair<int, string> const& op : operations) {
		logger.logDataWithNewLine(to_string(op.first) + string(" - ") + string(op.second));
	}
	cin >> operationNumber;
	return operationNumber;
}

unordered_map<int, string> updateMap() {
	Logger logger;
	logger.logDataWithNewLine("Going to set");
	operations[1] = "Addition";
	operations[2] = "Substraction";
	operations[3] = "Multiply";
	operations[4] = "Division";
	return operations;
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


