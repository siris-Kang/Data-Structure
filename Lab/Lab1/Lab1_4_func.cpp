/*
규격명세
MakeEmpty
기능 : Matrix의 n행과 열의 내부를 0으로 초기화
조건 : N의 최대 크기는 50
결과 : N안의 행, 열은 0으로 초기화

StroreValue
기능 : value를 i행, j열의 위치에 저장
조건 : i와 j는 0에서 50 사이의 수
결과 : value를 i행, j열의 위치에 저장

Add/Subtract
기능 : 두 행렬을 더한다/뺀다.
조건 : 객체가 가진 값과 파라미터로 받는 행렬의 값을 차례로 더한다/뺸다.
결과 : 객체는 두 행렬의 값을 더한/뺀 결과 값을 갖는다.

Copy
기능 : 한 행렬을 다른 행렬로 복사한다.
조건 : 복사생성자를 이용해도 될 것 같다.
결과 : 두 객체의 행렬이 같은 값을 갖는다.
*/

#include "Exercise28h.h"
#include <iostream>

SquareMatrix::SquareMatrix()
{
	;
}
SquareMatrix::~SquareMatrix()
{
	;
}
void SquareMatrix::MakeEmpty(int n)
{
	int i, j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = 0;
		}
	}
}
void SquareMatrix::StoreValue(int i, int j, int value)
{
	matrix[i][j] = value;
}
void SquareMatrix::Add(const SquareMatrix& SM)
{
	int i, j = 0;
	for (i = 0; i < MAX_ROWS; i++)
	{
		for (j = 0; j < MAX_COLS; j++)
		{
			matrix[i][j] += SM.matrix[i][j];
		}
	}
}
void SquareMatrix::Substract(SquareMatrix& SM)
{
	int i, j = 0;
	for (i = 0; i < MAX_ROWS; i++)
	{
		for (j = 0; j < MAX_COLS; j++)
		{
			matrix[i][j] -= SM.matrix[i][j];
		}
	}
}
void SquareMatrix::Copy(SquareMatrix& SM)
{
	int i, j = 0;
	for (i = 0; i < MAX_ROWS; i++)
	{
		for (j = 0; j < MAX_COLS; j++)
		{
			matrix[i][j] = SM.matrix[i][j];
		}
	}
}
void SquareMatrix::display(int i, int j)
{
	std::cout << matrix[i][j] << std::endl;
}