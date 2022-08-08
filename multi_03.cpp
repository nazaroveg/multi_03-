// multi_03.cpp 
//

#include <iostream>

//#include "multi_class_Figure.h"
#include "multi_class_Triangle.h"






int main()
{
	setlocale(LC_ALL, "RUS");
	//multi_class_Figure Fi{3, "names"};
	//Fi.print_info();
	multi_class_Triangle TR{90,90,90,40,40,40, "треугольник"};
	TR.print_info();
}

