#include <iostream>
#include <stdlib.h>
using namespace std;

class Matrix
{
public:
	int row, col;
	int* m;
	Matrix()
	{
		row = 3;
		col = 3;
		m = new int[9];
	}
	Matrix(int a, int b)
	{
		row = a;
		col = b;
		m = new int[row * col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> *(m + i * col + j);
			}
		}
	}
	void disp();
	Matrix operator + (const Matrix& c);
	Matrix operator = (const Matrix& c);
};

void Matrix::disp()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << *(m + i * col + j) << '\t';
		cout << endl;
	}
}

Matrix Matrix::operator + (const Matrix& c)
{
	if (row == c.row && col == c.col)
	{
		Matrix temp;
		temp.row = c.row;
		temp.col = c.col;
		temp.m = new int[row * col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				*(temp.m + i * col + j) = *(m + i * col + j) + *(c.m + i * col + j);
			}
		}
		return temp;
	}
	else
	{
		cout << "program terminated!";
		exit(0);
	}
}

Matrix Matrix::operator = (const Matrix& c)
{
	if (row == c.row && col == c.col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				*(m + i * col + j) = *(c.m + i * col + j);
			}
		}
		return *this;
	}
	else
	{
		cout << "program terminated!";
		exit(1);
	}
}

int main()
{
	int row_a, col_a, row_b, col_b;
	cin >> row_a >> col_a;
	Matrix A(row_a, col_a);
	cin >> row_b >> col_b;
	Matrix B(row_b, col_b), C;

	C = A + B;
	C.disp();
	cout << endl;
	A = B;
	A.disp();
	return 0;
}
