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
	void MakeEmpty(int n); //모든 n행과 열을 0으로 설정
	void StoreValue(int i, int j, int value); //value를 i행, j열의 위치에 저장
	void Add(const SquareMatrix& SM); //두 행렬을 함께 더한다
	void Substract(SquareMatrix& SM); //한 행렬을 다른 행렬로부터 뺀다
	void Copy(SquareMatrix& SM); // 한 행렬을 다른 행렬로 복사한다
	//복사생성자?
	void display(int i, int j);
};
#endif