#include "ref_pointers.h"

//
/*
Show that reference and pointers can modify data pointed or referenced
*/
void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;
}

