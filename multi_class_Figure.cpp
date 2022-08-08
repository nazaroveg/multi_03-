#include "multi_class_Figure.h"


multi_class_Figure::multi_class_Figure(int sides_count, std::string name)
{
	this -> name = name;
	this -> sides_count = sides_count;
}

 void multi_class_Figure::print_info() const
{
	std::cout << name << std::endl;
	std::cout << "число сторон: " << sides_count << std::endl;
}
