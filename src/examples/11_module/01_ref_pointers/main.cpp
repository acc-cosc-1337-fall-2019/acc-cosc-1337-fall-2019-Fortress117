#include "ref_pointers.h"
#include<iostream>

int main() 
{
	int* hold_return_value;
	int num = 5;

	hold_return_value = return_pointer(num);

	/*
		int number = 10;
	//a pointer can store the address of a variable
	int* numberPtr = &number;

	ref(number, numberPtr);

	//display what value? we should see 100

	std::cout << "Address of number: " << &number << " value is: "<<number<<"\n";


	std::cout << "\nAddress of numberPtr: " << &numberPtr << " value stored at address pointed to is: " << numberPtr<<"\n Dereference numberPtr: "<<*numberPtr;
	*/
	return 0;
}