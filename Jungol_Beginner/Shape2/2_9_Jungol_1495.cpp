//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=767&sca=2020

#include <iostream>

using namespace std;

int main() {

	int n;

	cout << "ют╥б :";

	cin >> n;

	int** arrInt = new int* [n] {0, };
	arrInt[0] = new int[n * n]{ 0, };
	for (int ii = 1; ii < n; ii++) {
		arrInt[ii] = arrInt[ii - 1] + n;
	}

	int count = 1;
	int num = 1;
	int center = 1;
	int x = 0, y = 0;

	while (num <= n * n) {		
		if (count < n) {
			for (int ii = 0; ii < center; ii++) {
				arrInt[x++][y--] = num++;
			}
			y++;
		}
		else {
			center %= n;
			center = n - center;
			for (int ii = 0; ii < center; ii++) {
				arrInt[x++][y--] = num++;
			}
			y += 2;
			x--;			
		}
		count++;
		center = count;

		if (num > n * n)
			break;

		if (count < n) {			
			for (int ii = 0; ii < center; ii++) {
				arrInt[x--][y++] = num++;
			}
			x++;
		}
		else {
			center %= n;
			center = n - center;
			for (int ii = 0; ii < center; ii++) {
				arrInt[x--][y++] = num++;
			}
			x += 2;
			y--;
		}
		count++;
		center = count;
	}

	for (int ii = 0; ii < n; ii++) {
		for (int jj = 0; jj < n; jj++) {
			cout << arrInt[ii][jj] << ' ';
		}
		cout << endl;
	}

	delete[] arrInt[0];
	delete[] arrInt;

	return 0;
}