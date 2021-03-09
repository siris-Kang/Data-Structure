#include <iostream>
#include "VecType.h"
using namespace std;

VecType compute(VecType& A, VecType& B, VecType& C)
{
	VecType D;

	int x = 3 * A.out_a() + 2 * B.out_a() - 5 * C.out_a();
	int y = 3 * A.out_b() + 2 * B.out_b() - 5 * C.out_b();
	int z = 3 * A.out_c() + 2 * B.out_c() - 5 * C.out_c();
	D.change_a(x);
	D.change_b(y);
	D.change_c(z);
	return D;
}


int main()
{
	int a, b, c;
	int d, e, f;
	int g, h, i;

	cout << "A : ";
	cin >> a >> b >> c;
	cout << "B : ";
	cin >> d >> e >> f;
	cout << "C : ";
	cin >> g >> h >> i;
	VecType A(a, b, c);
	VecType B(d, e, f);
	VecType C(g, h, i);
	VecType D;
	D = compute(A, B, C); //3A+2B-5C 계산
	int result = D.sum(); //D 의 요소의 합 계산
	cout << result;
	return 0;
}