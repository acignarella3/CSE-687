#include <iostream>
#include <vector>
#include "classHarness.h"
#include "number.h"

using namespace std;

int main()
{
	classHarness harness;

	vector<number> testVector = {
		number(20, 10),
		number(0, 10),
		number(-10, 10),
		number(10, -10),
		number()
	};

	harness.testFunction(testVector);

	return 0;
};