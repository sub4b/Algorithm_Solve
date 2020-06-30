//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=609&sca=2020

#include <stdio.h>
#include <iostream>

using namespace std;

enum eDirect {
	Down,
	Left,
	Up,
	End,
};

int main() {

	int n;
	cout << "ют╥б : ";
	cin >> n;

	int** arrCh = new int* [n];
	arrCh[0] = new int[n * n];
	memset(arrCh[0], -1, sizeof(int) * n);
	for (int ii = 1; ii < n; ii++) {
		arrCh[ii] = arrCh[ii - 1] + n;
		memset(arrCh[ii], -1, sizeof(int) * n);
	}

	eDirect e_Direct = Down;
	int idx = 0;
	int xx = 0, yy = 0;
	int idxEnd = 0;

	while (e_Direct < End) {
		switch (e_Direct) {
			case Down: {
				if (arrCh[xx][yy] != -1) {
					yy++;
					xx++;
				}

				while (xx < n && arrCh[xx][yy] == -1) {
					arrCh[xx][yy] = idx;
					xx++;
					yy++;
					idx++;

					if (idx > 9)
						idx = 0;
				}

				xx--;
				yy--;
				e_Direct = Left;
				break;
			}
			case Left: {
				if (arrCh[xx][yy] != -1)
					yy--;

				while (yy >= 0 && arrCh[xx][yy] == -1) {
					arrCh[xx][yy] = idx;
					yy--;
					idx++;

					if (idx > 9)
						idx = 0;
				}

				yy++;
				e_Direct = Up;
				break;
			}
			case Up: {
				if (arrCh[xx][yy] != -1)
					xx--;

				while (xx >= 0 && arrCh[xx][yy] == -1) {
					arrCh[xx][yy] = idx;
					xx--;
					idx++;

					if (idx > 9)
						idx = 0;
				}

				xx++;
				e_Direct = Down;
				break;
			}
		}

		idxEnd++;
		if (idxEnd >= n)
			e_Direct = End;
	}

	for (int ii = 0; ii < n; ii++) {
		for (int jj = 0; jj < n; jj++) {
			if(arrCh[ii][jj] != -1)
				cout << arrCh[ii][jj];
			else
				cout << ' ';
		}
		cout << endl;
	}

	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}