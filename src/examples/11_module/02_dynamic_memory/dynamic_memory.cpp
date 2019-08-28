#include "dynamic_memory.h"
#include<iostream>
//

void allocate_use_release()
{
	int stack_num{ 5 };//stack variable
	int* num = new int(5);//heap, data variable.. ALLOCATE

	std::cout << *num;//USE 

	delete num;//RELEASE
	num = nullptr;
}
