#ifndef EX1_H
#define EX1_H

#include <iostream>

typedef unsigned char byte;

int getNumEmptyPotions(byte potions)
{
	// TO DO: Insert your code here
	int ret = 0;
	
	for (int i = 0; i < 8; ++i)
	{
		if ((((byte)1 << i) & potions) == 0) ret++;
	}
	
	return ret;
}

#endif
