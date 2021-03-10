#ifndef EXERCISE28H_H_
#define EXERCISE28H_H_

#include <iostream>

#define MAX_ROWS 50
#define MAX_COLS 50

class SquareMatrix
{
private:
	int matrix[MAX_ROWS][MAX_COLS];
public:
	SquareMatrix();
	~SquareMatrix();
	void MakeEmpty(int n); //��� n��� ���� 0���� ����
	void StoreValue(int i, int j, int value); //value�� i��, j���� ��ġ�� ����
	void Add(const SquareMatrix& SM); //�� ����� �Բ� ���Ѵ�
	void Substract(SquareMatrix& SM); //�� ����� �ٸ� ��ķκ��� ����
	void Copy(SquareMatrix& SM); // �� ����� �ٸ� ��ķ� �����Ѵ�
	//���������?
	void display(int i, int j);
};
#endif