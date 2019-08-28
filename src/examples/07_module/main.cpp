//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"

int main() 
{
	//Shape s_abtract; can't create instance; pure virtual
	//function makes it an abstract class

	Shape* line = new Line();//creates dynamic memory (heap)
	line->draw();
	delete line;

	//vector of Shape pointers
	std::vector<Shape*> shapes{new Line(), new Circle()};

	for (auto& shape : shapes) 
	{
		shape->draw();
	}

	std::cout << "\n";
	
	for (auto* shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";

	//Shape instance using Smart Pointer
	std::unique_ptr<Shape> l = std::make_unique<Line>();
	l->draw();

	//vector of Shape instances using Smart Pointers
	std::vector <std::unique_ptr < Shape >> shaps;
	shaps.push_back(std::make_unique< Line >());
	shaps.push_back(std::make_unique< Circle >());

	for (auto & shape : shaps)
	{
		shape->draw();
	}

	return 0;
}