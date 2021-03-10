/*
�԰ݸ�
MakeEmpty
��� : Matrix�� n��� ���� ���θ� 0���� �ʱ�ȭ
���� : N�� �ִ� ũ��� 50
��� : N���� ��, ���� 0���� �ʱ�ȭ

StroreValue
��� : value�� i��, j���� ��ġ�� ����
���� : i�� j�� 0���� 50 ������ ��
��� : value�� i��, j���� ��ġ�� ����

Add/Subtract
��� : �� ����� ���Ѵ�/����.
���� : ��ü�� ���� ���� �Ķ���ͷ� �޴� ����� ���� ���ʷ� ���Ѵ�/�A��.
��� : ��ü�� �� ����� ���� ����/�� ��� ���� ���´�.

Copy
��� : �� ����� �ٸ� ��ķ� �����Ѵ�.
���� : ��������ڸ� �̿��ص� �� �� ����.
��� : �� ��ü�� ����� ���� ���� ���´�.
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