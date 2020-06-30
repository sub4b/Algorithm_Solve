//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=795&sca=2020

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int catag = 0;
	int n = 0;
	cout << "ют╥б : ";
	cin >> n >> catag;

	char** arrCh = NULL;
	if (catag < 3) {
		arrCh = (char**)malloc(n * sizeof(char*));
		arrCh[0] = (char*)malloc(n * n * sizeof(char));
		for (int ii = 1; ii < n; ii++) {
			arrCh[ii] = arrCh[ii - 1] + n;
		}
	}
	else {
		arrCh = (char**)malloc(n * sizeof(char*));
		arrCh[0] = (char*)malloc(n * (2 * n - 1) * sizeof(char));
		for (int ii = 1; ii < n; ii++) {
			arrCh[ii] = arrCh[ii - 1] + (2 * n - 1);
		}
	}

	switch (catag) {
	case 1:	{
		for (int ii = 0; ii < n; ii++) {
			for (int jj = 0; jj < n; jj++) {
				if (jj <= ii)
					arrCh[ii][jj] = '*';
				else
					arrCh[ii][jj] = '-';
			}
		}
	}
		break;
	case 2: {
		for (int ii = 0; ii < n; ii++) {
			for (int jj = 0; jj < n; jj++) {
				if (jj <= n - ii - 1)
					arrCh[ii][jj] = '*';
				else
					arrCh[ii][jj] = '-';
			}
		}
	}
		break;
	case 3: {
		char ch = 'a';
		for (int ii = 0; ii < n; ii++) {
			for (int jj = 0; jj < 2 * n - 1; jj++) {
				arrCh[ii][jj] = '-';
				//arrCh[ii][jj] = ch++;
				if (jj >= n - ii - 1 && jj <= n - 1 + ii)
					arrCh[ii][jj] = '*';
			}
		}
	}
		break;
	}

	if (catag < 3) {
		for (int ii = 0; ii < n; ii++) {
			for (int jj = 0; jj < n; jj++) {
				cout << arrCh[ii][jj];
			}
			cout << endl;
		}
	}
	else {
		for (int ii = 0; ii < n; ii++) {
			for (int jj = 0; jj < 2 * n - 1; jj++) {
				cout << arrCh[ii][jj];
			}
			cout << endl;
		}
	}
	

	free(arrCh[0]);
	free(arrCh);

	return 0;
}