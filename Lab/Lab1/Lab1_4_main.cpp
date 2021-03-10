/*
arrayA행렬과 arrayB행렬을 만들고 5x5범위를 0으로 초기화한다.
arrayA의 1, 1자리에 10의 값을 대입한다.
arrayB에 arrayA를 복사해 붙여준다.
arrayB의 1, 1자리의 값을 출력한다.//10
*/

#include "Exercise28h.h"
#include <iostream>

int main()
{
	SquareMatrix arrayA;
	arrayA.MakeEmpty(5);
	SquareMatrix arrayB;
	arrayB.MakeEmpty(5);
	arrayA.StoreValue(1, 1, 10); //arrayA의 [1][1] data는 10
	arrayB.Copy(arrayA);         //arrayB = arrayA
	arrayB.display(1, 1);        //10이 출력되어야 한다
}