#pragma once
#include <string>
#include <iostream>
#include "multi_class_Figure.h"

class multi_class_Triangle : public multi_class_Figure
{
public:

	multi_class_Triangle(const int A, int B, int C, int a, int b, int c, std::string);

	void print_info() const override;

protected:
	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;
};

