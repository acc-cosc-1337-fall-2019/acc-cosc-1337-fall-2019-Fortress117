#include "vector.h"

Vector get_vector();


int main()
{
	Vector v(1);
	v = get_vector();


}

Vector get_vector()
{
	Vector v(3);

	return v;

}