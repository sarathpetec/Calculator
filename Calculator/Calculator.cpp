#include<iostream>
#include "Sum.cpp"
#include "Substract.cpp"
#include "Multiplication.cpp"
#include "Division.cpp"

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
	cout << "Enter First Number" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	cout << "Enter the Operation number need to perform \n";
	cout << "1. Addition \n";
	cout << "2. Substraction \n";
	cout << "3. Multiply \n";
	cout << "4. Division \n";
	cin >> operationNumber;
	
	calculateValue = calculator(a, b, operationNumber);
	cout << "Sum of " << a << " and " << b <<" is :: "<< calculateValue <<endl;

}