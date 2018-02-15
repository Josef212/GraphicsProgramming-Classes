#ifndef EX2_H
#define EX2_H

typedef unsigned char byte;
typedef unsigned short ushort;

int isContained(byte b, ushort u)
{
	// TO DO: Insert your code here
	ushort _b = b;

	for (int i = 0; i < 8; ++i)
	{
		if ((_b << i) & u == (_b << i)) return 1;
	}

	return 0;
}

#endif
