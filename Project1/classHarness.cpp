#include "classHarness.h"
#include <string>
#include <iostream>

using namespace std;


classHarness::classHarness()
{
}

void classHarness::testFunction()
{
	int inputOne, inputTwo;

	cout << "Enter value for inputOne: ";
	cin >> inputOne;
	cout << "Enter value for inputTwo: ";
	cin >> inputTwo;
	
	number test;
	try
	{
		cout << "Testing with inputOne and inputTwo:" << endl;
		test(inputOne, inputTwo);
		cout << "Testing with 0 for one input:" << endl;
		test(inputOne, 0);
		cout << "Testing with no inputs:" << endl;
		test();
	}
	catch (string x)
	{
		cout << x << endl;
	}
}

classHarness::~classHarness()
{
}
