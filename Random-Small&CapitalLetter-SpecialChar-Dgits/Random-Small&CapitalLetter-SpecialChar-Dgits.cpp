#include <iostream>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

char CharType(enCharType CharType)
{
	switch (CharType)
	{
	case ::enCharType::CapitalLetter:
	
		return char(RandomNumbers(65, 90));
		break;
	
	case ::enCharType::SmallLetter:
	
		return char(RandomNumbers(97, 122));
		break;
	
	case::enCharType::SpecialChar:
	
		return char(RandomNumbers(33, 47));
		break;
	
	case::enCharType::Digit:
	
		return char(RandomNumbers(48, 57));
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << CharType(enCharType::SmallLetter) << endl;
	cout << CharType(enCharType::CapitalLetter) << endl;
	cout << CharType(enCharType::SpecialChar) << endl;
	cout << CharType(enCharType::Digit) << endl;

	return 0;

}

