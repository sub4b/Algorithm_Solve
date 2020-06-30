//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2073&sca=2020

#include <iostream>

using namespace std;

int main() {

	int n;

	cout << "ют╥б : ";

	cin >> n;

	char** arrCh = new char* [2 * n - 1]{ 0, };
	arrCh[0] = new char[(2 * n - 1) * (2 * n - 1)]{ 0, };
	for (int ii = 1; ii < 2 * n - 1; ii++) {
		arrCh[ii] = arrCh[ii - 1] + (2 * n - 1);
	}

	char ch = 'A';
	int xx = 0, yy = n - 1;
	int count = n;

	while (count >= 0) {
		for (int ii = 0; ii < count; ii++) {
			arrCh[xx++][yy--] = ch++;

			if (ch > 'Z')
				ch = 'A';
		}
		yy += 2;
		count--;

		for (int ii = 0; ii < count; ii++) {
			arrCh[xx++][yy++] = ch++;

			if (ch > 'Z')
				ch = 'A';
		}
		xx -= 2;

		for (int ii = 0; ii < count; ii++) {
			arrCh[xx--][yy++] = ch++;

			if (ch > 'Z')
				ch = 'A';
		}
		yy -= 2;
		count--;

		for (int ii = 0; ii < count; ii++) {
			arrCh[xx--][yy--] = ch++;

			if (ch > 'Z')
				ch = 'A';
		}
		xx++;
		count++;
	}

	for (int ii = 0; ii < 2 * n - 1; ii++) {
		for (int jj = 0; jj < 2 * n - 1; jj++) {
			cout << arrCh[ii][jj] << ' ';
		}
		cout << endl;
	}

	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}