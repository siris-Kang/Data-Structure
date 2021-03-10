#pragma once
#include <iostream>

using namespace std;

class VecType
{
private:
	int a;
	int b;
	int c;

public:
	VecType(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
	VecType() {
		a = 0;
		b = 0;
		c = 0;
	}
	int sum() const;
	int out_a();
	int out_b();
	int out_c();
	void change_a(int);
	void change_b(int);
	void change_c(int);
};