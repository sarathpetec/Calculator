#include "Sum.h"

/**
* Constructor.
* @param a The first value to add.
* @param b The second value to add.
*/
Sum::Sum(int a, int b) : value1(a), value2(b)
{

}
/**
* Destructor.
*/
Sum::~Sum() 
{}

/**
* Getter for getting the value of the variable value1.
*/
int Sum::getValue1() {
	return value1;
}

/**
* Getter for getting the value of the variable value2.
*/
int Sum::getValue2() {
	return value2;
}

int Sum::calculate() {
	int result = (getValue1() + getValue2());
	return result;
}