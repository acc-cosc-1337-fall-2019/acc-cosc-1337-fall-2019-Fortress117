#include<iostream>
//
class RuleOfFive
{
public:
	RuleOfFive(int n) : num(n) { ptr_num = new int(n); }
	RuleOfFive(const RuleOfFive& d);//copy constructor - RULE OF 3
	RuleOfFive& operator=(RuleOfFive& d);//copy assignment - RULE OF 3
	RuleOfFive(RuleOfFive&& r);//move constructor -RULE OF 5 C++ 11
	RuleOfFive& operator=(RuleOfFive&& r);//copy assignment - Rule of 5 C++ 11
	~RuleOfFive(); //RULE OF 3
	void set_value(int n);
	int get_value();

	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	int* ptr_num;
};