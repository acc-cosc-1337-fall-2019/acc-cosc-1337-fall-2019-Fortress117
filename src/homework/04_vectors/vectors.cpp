#include "vectors.h"




//1 = true, 0 = false

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const std::vector<int> & nums)
{
	int biggest = nums.at(0);
	
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums.at(i) > biggest)
		{
			biggest = nums[i];
		}
	}

	return biggest;
}




/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int nums)
{
	
	int prime_check = 0;
	for (int i = 2; i <= nums /2; i++)
	{
		if (nums % i == 0)
			prime_check = 1;

	}
	if (nums == 1)
	{
		return false;
	}
	else if (nums == 0)
	{
		return false;
	}
	else
	{
		if (prime_check == 1)
			return false;
		else
			return true;
	}
	
}



/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

vector<int> vector_of_primes(int num)
{
	vector<int> primes;
	for (int i = 0; i < num; i++)
	{
		int check = is_prime(i);
		if (check == 1)
		{
			primes.push_back(i);
		}
		
	}

	return primes;
}
