#include "multi_class_Triangle.h"

multi_class_Triangle::multi_class_Triangle(const int A, int B, int C, int a, int b, int c, std::string name) :
	multi_class_Figure(3, name),  corner_a(A), corner_b(B), corner_c(C), Length_a(a), Length_b(b), Length_c(c)
{
}
void multi_class_Triangle::print_info() const
{
	multi_class_Figure::print_info();
	std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << std::endl;
	std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << "\n" << std::endl;
}