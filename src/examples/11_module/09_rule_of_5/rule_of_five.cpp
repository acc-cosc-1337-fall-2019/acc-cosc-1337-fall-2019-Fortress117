#include "rule_of_five.h"

//

RuleOfFive::~RuleOfFive()
{
	delete ptr_num;
	ptr_num = nullptr;
}

RuleOfFive::RuleOfFive(const RuleOfFive & d)
{
	ptr_num = new int(*d.ptr_num);
}

RuleOfFive& RuleOfFive::operator=(RuleOfFive& d)
{
	delete ptr_num;
	ptr_num = new int(*d.ptr_num);

	return *this;
}
/*
PARAMETER r is a temporary object(rvalue)
*/
RuleOfFive::RuleOfFive(RuleOfFive && r)
{
	ptr_num = r.ptr_num;
	r.ptr_num = nullptr;
}

RuleOfFive & RuleOfFive::operator=(RuleOfFive && r)
{
	std::swap(ptr_num, r.ptr_num);
	return *this;
}

void RuleOfFive::set_value(int n)
{
	num = n;
}

int RuleOfFive::get_value()
{
	return num;
}

void RuleOfFive::set_ptr_num(int n)
{
	*ptr_num = n;
}

int * RuleOfFive::get_ptr_num()
{
	return ptr_num;
}
