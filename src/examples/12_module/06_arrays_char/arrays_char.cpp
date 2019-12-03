//cpp
#include "arrays_char.h"
#include <iostream>
void stack_char_array()
{
	const int SIZE = 5;
	char name0[] = "John";
	std::cout << name0 << "\n";

	char name1[SIZE] = "Mary";
	name1[4] = '\0'; // terminate the string
	std::cout << name1<< "\n";

	for (int i = SIZE; name1[i] != '\0'; i++)
	{
		std::cout << name1[i];
	}
}

