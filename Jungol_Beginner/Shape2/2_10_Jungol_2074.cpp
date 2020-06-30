//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1338&sca=2020

#include <iostream>

using namespace std;

int main() {

	int n;

	do {
		cout << "È¦¼ö ÀÔ·Â : ";

		cin >> n;
	} while (n % 2 == 0);
	

	int** arrInt = new int* [n] { 0, };
	arrInt[0] = new int[n * n]{ 0, };
	for (int ii = 1; ii < n; ++ii) {
		arrInt[ii] = arrInt[ii - 1] + n;
	}

	int num = 2;	
	int x = 0, y = n * 0.5f;
	arrInt[x--][y--] = 1;

	while (num <= n * n) {
		if (x < 0) {
			x = x + n;
		}
		if (y < 0) {
			y = y + n;
		}

		if (num % n == 0) {
			arrInt[x++][y] = num++;
		}
		else {
			arrInt[x--][y--] = num++;
		}		
	}

	for (int ii = 0; ii < n; ++ii) {
		for (int jj = 0; jj < n; ++jj) {
			cout << arrInt[ii][jj] << ' ';
		}
		cout << endl;
	}

	delete[] arrInt[0];
	delete[] arrInt;

	return 0;
}