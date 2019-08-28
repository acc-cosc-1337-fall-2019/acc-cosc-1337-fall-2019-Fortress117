#include "memory_leak.h"

//

void memory_leak()
{
	int* ptr = new int(10);
	//use it 
	//forgot to delete and set to null
}
