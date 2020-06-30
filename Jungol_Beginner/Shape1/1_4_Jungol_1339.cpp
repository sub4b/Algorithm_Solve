//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2075&sca=2010

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int n = 1;
	
	cout << "ют╥б : ";
	cin >> n;
	

	char ch[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	char** arrCh = new char* [n] {0, };
	arrCh[0] = new char[n * n]{ 0, };
	for (int ii = 1; ii < n; ii++) {
		arrCh[ii] = arrCh[ii - 1] + n;
	}

	int start = n * 0.5f + 1;
	start = start * start - 1;
	if (start > 26)
		start %= 26;

	for (int ii = 0; ii < n; ii++) {
		if (ii > n * 0.5f)
			break;
		for (int jj = n - ii - 1; jj >= ii; jj--) {
			arrCh[jj][ii] = ch[start--];
			if (start < 0)
				start = 25;
		}
	}

	for (int ii = 0; ii < n; ii++) {
		for (int jj = 0; jj < n; jj++) {
			//cout << arrCh[jj][ii];
			cout << arrCh[ii][jj] << ' ';
			//if (arrCh[jj][ii] == NULL)
			if (arrCh[ii][jj] == NULL)
				cout << ' ';
		}
		cout << endl;
	}

	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}