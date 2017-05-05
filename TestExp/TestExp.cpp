// TestExp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "exp.h"
#include <iostream>


int main()
{
	Part p1;
	p1.setData(4);

	std::cout << p1.getData() << std::endl;
	system("pause");
	return 0;
}

