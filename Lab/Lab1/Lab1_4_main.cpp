/*
arrayA��İ� arrayB����� ����� 5x5������ 0���� �ʱ�ȭ�Ѵ�.
arrayA�� 1, 1�ڸ��� 10�� ���� �����Ѵ�.
arrayB�� arrayA�� ������ �ٿ��ش�.
arrayB�� 1, 1�ڸ��� ���� ����Ѵ�.//10
*/

#include "Exercise28h.h"
#include <iostream>

int main()
{
	SquareMatrix arrayA;
	arrayA.MakeEmpty(5);
	SquareMatrix arrayB;
	arrayB.MakeEmpty(5);
	arrayA.StoreValue(1, 1, 10); //arrayA�� [1][1] data�� 10
	arrayB.Copy(arrayA);         //arrayB = arrayA
	arrayB.display(1, 1);        //10�� ��µǾ�� �Ѵ�
}