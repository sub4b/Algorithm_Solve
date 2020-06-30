//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1335&sca=2020

#include <iostream>

using namespace std;

int main() {

	int n, m;

	cout << "ют╥б : ";

	cin >> n >> m;

	int** arrCh = new int* [n] { 0, };
	arrCh[0] = new int[n * n]{ 0, };
	for (int ii = 1; ii < n; ii++) {
		arrCh[ii] = arrCh[ii - 1] + n;
	}

	for (int ii = 0; ii < n; ii++) {
		for (int jj = 0; jj < n; jj++) {
			if (jj > ii)
				continue;

			if (jj == 0 || jj == ii)
				arrCh[ii][jj] = 1;
			else {
				if (ii > 1)
					arrCh[ii][jj] = arrCh[ii - 1][jj - 1] + arrCh[ii - 1][jj];
			}
		}
	}

	switch (m) {
		case 1: {			
			for (int ii = 0; ii < n; ii++) {
				for (int jj = 0; jj < n; jj++) {
					cout << arrCh[ii][jj];
				}
				cout << endl;
			}

			break;
		}
		case 2: {			
			for (int ii = n - 1; ii >= 0; ii--) {
				for (int jj = 0; jj < n; jj++) {
					cout << arrCh[ii][jj];
				}
				cout << endl;
			}

			break;
		}
		case 3: {
			for (int ii = n - 1; ii >= 0; ii--) {
				for (int jj = n - 1; jj >= 0; jj--) {
					cout << arrCh[jj][ii];
				}
				cout << endl;
			}

			break;
		}
		default: {

			break;
		}
	}

	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}