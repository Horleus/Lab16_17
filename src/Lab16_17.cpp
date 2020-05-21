#include <iostream>
using namespace std;

const int M = 2;
const int N = 3;

int main() {
	setlocale(LC_ALL, "Ukrainian");
	int A[M][N] = {{2, 9, 17}, {1, 5, 8}};
	int i, j, r, s, max;
	cout << "Вихiдний масив:" << endl;
	max = A[0][0];
	r = 0;
	s = 0;
	for (i = 0; i < M; i++ )
	{
		for (j = 0; j < N; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < M; i++ )
		for (j = 0; j < N; j++)
		{
			if (max < A[i][j])
			{
				max = A[i][j];
				r=i;
				s=j;
			}
		}

	cout << "Найбiльший елемент матрицi " << max << endl;
	cout << "Рядок " << r << ", стовпчик " << s <<endl;

	return 0;
}
