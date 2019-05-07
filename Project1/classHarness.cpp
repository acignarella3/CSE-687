#include "classHarness.h"
#include <string>
#include <iostream>
#include <vector>
#include "number.h"

using namespace std;


classHarness::classHarness()
{
}

void classHarness::testFunction(vector<number> &vtest)
{

	for (int i = 0; i < vtest.size(); i++) {

		number run = vtest.at(i);

		try
		{
			cout << "Test " << (i + 1) << " start" << endl;
			cout << "The result is " << run() << endl;
			cout << "Test " << (i + 1) << " passed" << endl;
		}
		catch (string e)
		{
			cout << "Error: " << e << endl;
			cout << "The inputs used were " << run._inputOne << " and " << run._inputTwo << endl;
			cout << "Test " << (i + 1) << " failed" << endl;
		}

	}

}

classHarness::~classHarness()
{
}
