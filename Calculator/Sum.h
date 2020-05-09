#pragma once

class Sum {
private:
	const int value1;
	const int value2;
public: 
	Sum(int value1, int value2);
	~Sum();
	int sum();
	void setValue1(int a);
	void setValue2(int b);
	int getValue1();
	int getValue2();
protected:

};