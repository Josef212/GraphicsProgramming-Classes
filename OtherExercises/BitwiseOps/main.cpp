#include "SimpleUnitTest.h"
#include <iostream>
#include "Ex1.h"
#include "Ex2.h"

void testExercises();

int main() {
	isContained(0xFF, 0x00FF);
	isContained(0xFF, 0xFF00);
	isContained(0x01, 0x0000);
	isContained(0x0A, 0x10A3);
	isContained(0xAA, 0x1AA3);
	isContained(0x78, 0x0078);
	isContained(0x30, 0x061F);
	isContained(0x99, 0x0078);
	isContained(0xFF, 0x0FF0);

	testExercises();
	system("pause");
	return 0;
}

void testExercises()
{
	TEST("Ex 1: getNumEmptyPotions(...)", 
		getNumEmptyPotions(0) == 8 &&
		getNumEmptyPotions(8) == 7 &&
		getNumEmptyPotions(7) == 5 &&
		getNumEmptyPotions(255) == 0 &&
		getNumEmptyPotions(166) == 4 &&
		getNumEmptyPotions(93) == 3);

	TEST("Ex 2: isContained(...)",
		isContained(0xFF, 0x00FF) == 1 &&
		isContained(0xFF, 0xFF00) == 1 &&
		isContained(0x01, 0x0000) == 0 &&
		isContained(0x0A, 0x10A3) == 1 &&
		isContained(0xAA, 0x1AA3) == 1 &&
		isContained(0x78, 0x0078) == 1 &&
		isContained(0x30, 0x061F) == 1 &&
		isContained(0x99, 0x0078) == 0 &&
		isContained(0xFF, 0x0FF0) == 1);
	
	
	PRINT_TEST_REPORT();
}

