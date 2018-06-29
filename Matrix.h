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

	Matrix(unsigned int rows, unsigned int columns);//Строки столбцы 

	Matrix(unsigned int rows, unsigned int columns, int lower, int upper);// конструктор который заполняет рандомными числами от lower до upper

	Matrix(Matrix &&matrix); //присваивания

	Matrix(Matrix &matrix); //копирования

	~Matrix();

	unsigned int rows() const;

	unsigned int columns() const;

	float element(unsigned int i, unsigned int j) const;

	void set_size(unsigned int rows, unsigned int columns);

	

	void set_element(unsigned int row, unsigned int column, float data);

	Matrix transp();

	Matrix minor(unsigned int row, unsigned int column);

	float det();

	Matrix operator + (const Matrix &matrix);//перегрузка оператора +

	Matrix operator - (const Matrix &matrix);//перегрузка оператора -

	Matrix operator * (float n);// умножение матрицы на число

	Matrix operator * (const Matrix &matrix);//умножение матрицы на матрицу

	Matrix & Matrix::operator = (Matrix &matrix);//перегрузка оператора присваивания

	Matrix & Matrix::operator = (Matrix &&matrix);//конструктор перемещения

	Matrix fill_random(float min = -10, float max = 10);//заполнение рандомное 
	
    friend Matrix  operator* (float left,  Matrix &right);
};

