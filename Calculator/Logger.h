#pragma once
#include<iostream>

using namespace std;

class Logger {

public: static void logDataWithNewLine(string msg) {

	cout << msg<<"\n";
};

public: void logData(string msg) {
	cout << msg;
}


};