#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
	int n1, n2, m1, m2, i = 0, j = 0;
	int **a;
	cout << "Type in elements of first matrix " << endl;
	cin >> n1 >> m1;
	a = new int*[n1];
	// filling up array a with memory
	for (i = 0; i < n1; i++) {
		a[i] = new int[m1];
	}
	// input of elements of matrix a
	for (i = 0; i < n1; ++i)
		for (j = 0; j < m1; ++j)
		{
			cout << "Type in element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

	cin >> n2 >> m2;
	int **b;
	b = new int*[n2];
	// filling up array b with memory
	for (i = 0; i < n2; i++) {
		b[i] = new int[m2];
	}
	cout << endl << "Type in elements of second matrix " << endl;
	// input of elements of matrix b
	for (i = 0; i < n2; ++i) {
		for (j = 0; j < m2; ++j)
		{
			cout << "Type in element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	}
	
	int **result = new int*[n1];
	for (i = 0; i < n1; i++)
	{
		result[i] = new int[m2];
	}

	if (m1 != n2)
	{
		cout << "Matrix can not be multiplied";
		return 0;
	}
	
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m2; j++)
		{
			int current_index = 0;
			for (int k = 0; k < m1; k++)
			{
				current_index += a[i][k] * b[k][j];
				result[i][j] = current_index;
			}
		}
	}

	for (i = 0; i < n1; i++, cout << endl)
	{
		for (j = 0; j < m2; j++)
		{
			cout << result[i][j] << " ";
		}
	}
	// summarizing
	/*if (n < m) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] += a[i][j];
			}
		}
		for (int i = 0; i < m; i++, cout << endl) {
			for (int j = 0; j < m; j++) {
				cout << b[i][j] << " ";
			}
		}
	}
	else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] += b[i][j];
			}
		}
		for (int i = 0; i < n; i++, cout << endl) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
		}
	}*/
}