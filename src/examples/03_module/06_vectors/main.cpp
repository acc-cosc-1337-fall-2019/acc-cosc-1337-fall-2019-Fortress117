#include "vec.h"

int main() 
{
	loop_vector_w_index();
	std::vector<int> nums = { 99, 55, 1, 3, 66 };
	
	/*std::vector<int> nums(9, " ");
	nums[0] = '9';
	nums.clear();
	nums.push_back(100); insert on to the end of a list
	nums.
	*/
	loop_vector_w_index(nums);
	
	loop_vector_w_index_ref(nums);
	
	loop_vector_w_index_const(nums);
	
	loop_vector_w_for_ranged(nums);
	return 0;
}