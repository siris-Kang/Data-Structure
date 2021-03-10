#include "VecType.h"
#include <iostream>

int VecType::sum() const
{
	//int sum = sqrt(a * a + b * b + c * c);
	int sum = a + b + c;
	return sum;
}
int VecType::out_a()
{
	return a;
}
int VecType::out_b()
{
	return b;
}
int VecType::out_c()
{
	return c;
}
void VecType::change_a(int _a)
{
	a = _a;
}
void VecType::change_b(int _b)
{
	b = _b;
}
void VecType::change_c(int _c)
{
	c = _c;
}