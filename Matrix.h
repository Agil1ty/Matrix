#pragma once
#include <vector>
#include <stdio.h>
#include <string>
#include <stdlib.h> 
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

class Matrix
{
private:
	vector <vector <float>> mat;

public:
	Matrix();

	Matrix(unsigned int rows);

	Matrix(unsigned int rows, unsigned int columns);//������ ������� 

	Matrix(unsigned int rows, unsigned int columns, int lower, int upper);// ����������� ������� ��������� ���������� ������� �� lower �� upper

	Matrix(Matrix &&matrix); //������������

	Matrix(Matrix &matrix); //�����������

	~Matrix();

	unsigned int rows() const;

	unsigned int columns() const;

	float element(unsigned int i, unsigned int j) const;

	void set_size(unsigned int rows, unsigned int columns);

	

	void set_element(unsigned int row, unsigned int column, float data);

	Matrix transp();

	Matrix minor(unsigned int row, unsigned int column);

	float det();

	Matrix operator + (const Matrix &matrix);//���������� ��������� +

	Matrix operator - (const Matrix &matrix);//���������� ��������� -

	Matrix operator * (float n);// ��������� ������� �� �����

	Matrix operator * (const Matrix &matrix);//��������� ������� �� �������

	Matrix & Matrix::operator = (Matrix &matrix);//���������� ��������� ������������

	Matrix & Matrix::operator = (Matrix &&matrix);//����������� �����������

	Matrix fill_random(float min = -10, float max = 10);//���������� ��������� 
	
    friend Matrix  operator* (float left,  Matrix &right);
};

