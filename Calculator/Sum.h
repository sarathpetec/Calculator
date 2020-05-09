#pragma once

class Sum {
private:
	int value1;
	int value2;
public: 
	Sum(int a, int b);
	int sum();
	void setValue1(int a);
	void setValue2(int b);
	int getValue1();
	int getValue2();
protected:

};