#include "decisions.h"
#include <iostream>
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_points > 0)
		return credit_points / credit_hours;
	else
		return -1;
}



int get_letter_grade_using_if(int num)
{
	if (num >= 90)
	{
		return 'A';
	}
	else if (num >= 80)
	{
		return 'B';
	}
	else if (num >= 70)
	{
		return 'C';
	}
	else if (num >= 60)
	{
		return 'D';
	}
	else if (num <= 59)
	{
		return 'F';
	}
	else
	{
	return -1;
	}
}

	





int get_letter_grade_using_switch(int num)
{
	
	switch (num) 
	{
	case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100:
		return 'A';
	case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89:
		return 'B';
	case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79:
		return 'C';
	case 60: case 61: case 62: case 63: case 64: case 65: case 66: case 67: case 68: case 69:
		return 'D';
	default:
		return 'F';
	}
}
