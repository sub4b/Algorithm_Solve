//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=992&sca=2020

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int height = 0;
	int catag = 0;

	cout << "ют╥б : ";
	cin >> height >> catag;

	char** arrCh = new char* [height] {0, };
	arrCh[0] = new char[height * height]{ 0, };
	for (int ii = 1; ii < height; ii++) {
		arrCh[ii] = arrCh[ii - 1] + height;
	}

	switch (catag) {
		case 1: {
			for (int ii = 0; ii < height; ii++) {
				for (int jj = 0; jj < height; jj++) {
					if (jj <= ii)
						arrCh[ii][jj] = '*';
					if (ii > height * 0.5f && height - jj - 1 < ii)
						arrCh[ii][jj] = NULL;
				}
			}
			break;
		}
		case 2: {
			for (int ii = 0; ii < height; ii++) {
				for (int jj = 0; jj < height; jj++) {
					if(height - ii - 1 <= jj)
						arrCh[ii][jj] = '*';
					if (ii > height * 0.5f && jj < ii)
						arrCh[ii][jj] = NULL;
				}
			}
			break;
		}
		case 3: {
			for (int ii = 0; ii < height; ii++) {
				for (int jj = 0; jj < height; jj++) {
					if (ii < height * 0.5f) {
						if (jj >= ii && jj < height - ii)
							arrCh[ii][jj] = '*';
					}
					else {
						if (jj >= height - 1 - ii && jj <= ii)
							arrCh[ii][jj] = '*';
					}
				}
			}
			break;
		}
		case 4: {
			for (int ii = 0; ii < height; ii++) {
				for (int jj = 0; jj < height; jj++) {
					if (ii < height * 0.5f) {
						if (jj >= ii)
							arrCh[ii][jj] = '*';
						if (jj > height * 0.5f)
							arrCh[ii][jj] = NULL;
					}
					else {
						if (jj >= height - 1 - ii && jj <= ii)
							arrCh[ii][jj] = '*';
						if(jj < height * 0.5f - 1)
							arrCh[ii][jj] = NULL;
					}
				}
			}
			break;
		}
	}

	for (int ii = 0; ii < height; ii++) {
		for (int jj = 0; jj < height; jj++) {
			cout << arrCh[ii][jj];
		}
		cout << endl;
	}


	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}