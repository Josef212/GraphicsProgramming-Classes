#include <iostream>

typedef unsigned char byte;

int main()
{
	//std::cout << "Sizeof unsigned char: " << sizeof(byte) << " bytes." << std::endl;
	//std::cout << "Sizeof unsigned short: " << sizeof(unsigned short) << " bytes." << std::endl;

	// Not

	std::cout << "Not" << std::endl;

	byte val = 7;
	byte notVal = ~val;

	std::cout << "Val: " << (unsigned short)val << std::endl;
	std::cout << "NotVal: " << (unsigned short)notVal << std::endl;

	std::cout << " -------------------- " << std::endl;

	// --------------------------------------------------------------------------------------------

	// And

	std::cout << "And" << std::endl;

	byte val2 = 243;
	byte and = val2 & 0xF0; // 1111 0011 & 1111 0000 = 1111 0000

	std::cout << "Val2: " << (unsigned short)val << std::endl;
	std::cout << "Val2 & 0xF0: " << (unsigned short)and << std::endl;

	std::cout << " -------------------- " << std::endl;

	// --------------------------------------------------------------------------------------------

	// Or

	std::cout << "Or" << std::endl;

	byte val3 = 147;
	byte or = val3 | 0xF0; // 1001 0011 | 1111 0000 = 1111 0011

	std::cout << "Val3: " << (unsigned short)val3 << std::endl;
	std::cout << "Val3 | 0xF0: " << (unsigned short) or << std::endl;

	std::cout << " -------------------- " << std::endl;

	// --------------------------------------------------------------------------------------------

	// XOR ( ^ ) - Change the values

	std::cout << "XOR" << std::endl;

	byte xor = val3 ^ 0xF0; // 1001 0011 ^ 1111 0000 = 0110 0011

	std::cout << "Val3: " << (unsigned short)val3 << std::endl;
	std::cout << "Val3 ^ 0xF0: " << (unsigned short) xor << std::endl;

	std::cout << " -------------------- " << std::endl;

	// --------------------------------------------------------------------------------------------

	// << - Pow(2, x)

	std::cout << "<<" << std::endl;
	
	std::cout << " -------------------- " << std::endl;

	// --------------------------------------------------------------------------------------------

	// >> - Integer divide by 2

	std::cout << ">>" << std::endl;
	
	std::cout << " -------------------- " << std::endl;

	// --------------------------------------------------------------------------------------------

	// Color codification with bitwise

	unsigned int color = 0;

	byte red = 1;
	byte green = 85;
	byte blue = 255;
	byte alpha = 255;

	unsigned int firstByte = red << 24;
	color = firstByte;
	unsigned int secondByte = green << 16;
	color = color | secondByte;
	unsigned int thirdByte = blue << 8;
	color = color | thirdByte;
	unsigned int fourthByte = alpha;
	color = color | fourthByte;
	
	std::cout << "Codified color: " << color << std::endl;

	unsigned int maskRed =		0xFF000000;
	unsigned int maskGreen =	0x00FF0000;
	unsigned int maskBlue =		0x0000FF00;
	unsigned int maskAlpha =	0x000000FF;

	byte r = (color & maskRed) >> 24;
	byte g = (color & maskGreen) >> 16;
	byte b = (color & maskBlue) >> 8;
	byte a = (color & maskAlpha);

	std::cout << "R: " << (unsigned short)r << std::endl;
	std::cout << "G: " << (unsigned short)g << std::endl;
	std::cout << "B: " << (unsigned short)b << std::endl;
	std::cout << "A: " << (unsigned short)a << std::endl;



	system("PAUSE");

	return 0;
}