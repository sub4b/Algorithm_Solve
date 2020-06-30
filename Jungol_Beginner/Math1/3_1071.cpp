#include <iostream>

using namespace std;


int main() {

	int n = 0;

	cout << "ют╥б : ";

	cin >> n;

	int* arrInt = new int[n] {0,};	

	for (int ii = 0; ii < n; ii++)
		cin >> arrInt[ii];

	int m = 0;

	cin >> m;

	int sum = 0;

	for (int ii = 0; ii < n; ii++) {
		if (arrInt[ii] <= m && m % arrInt[ii] == 0)
			sum = sum + arrInt[ii];
	}
	cout << sum << endl;

	sum = 0;

	for (int ii = 0; ii < n; ii++) {
		if (arrInt[ii] >= m && arrInt[ii] % m == 0)
			sum = sum + arrInt[ii];
	}
	cout << sum << endl;

	delete[] arrInt;

	return 0;
}