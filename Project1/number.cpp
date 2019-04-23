#include "number.h"
#include <iostream>

using namespace std;

number::number()
{
}

void number::operator()()
{
	throw string("No inputs were used");
}

void number::operator()(int inputOne, int inputTwo)
{
	if (inputOne == 0) {
		throw string("The first input is zero");
	}
	if (inputTwo == 0) {
		throw string("The second input is zero");
	}

	cout << "The value input for inputOne is: " << inputOne << endl;
	cout << "The value input for inputTwo is: " << inputTwo << endl;
	int results = inputOne / inputTwo;
	cout << "The result is: " << results << endl;
}

number::~number()
{
}
