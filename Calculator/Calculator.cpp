#include<iostream>
#include "Sum.h"

using namespace std;

int calculator(int a, int b) {
	Sum sum;
	return sum.sum(a, b);
}


int main() {
	int a, b;
	cout << "Enter First Number" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	int addValue = calculator(a,b);
	cout << "Sum of " << a << " and " << b <<" is :: "<< addValue<<endl;

}