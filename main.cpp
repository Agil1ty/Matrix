#include "Matrix.h"

using namespace std;




void view(const Matrix &mat)
{
	cout << endl;

	for (unsigned int i = 0; i < mat.rows(); i++)
	{
		for (unsigned int j = 0; j < mat.columns(); j++)
		{
			cout << mat.element(i, j) << "  ";
		}
		cout << endl;
	}

	cout << endl;
};

void main()
{
	setlocale(LC_ALL, "Russian");

	Matrix a(4, 4, 1, 9);
	Matrix b(4, 4, 10, 20);
	/*a.fill_random(1, 9);
	b.fill_random(2, 8);*/
	view(a);
	view(b);

	view(0.3*a);
	view(a*b);
	view(a + b);
	view(a - b);
	cout << endl;
	cout << a.det() << endl;

	system("Pause");
}

