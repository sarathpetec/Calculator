#include<iostream>

using namespace std;

int calculator() {
	int num1, num2, sum;
	cout << "Enter first number";
	cin >> num1;
	cout << "Enter secound number";
	cin >> num2;
	sum = num1 + num2;
	
	return sum;
}


int main() {
	
	int sum = calculator();
	cout << "The Sum is :" << sum;

}