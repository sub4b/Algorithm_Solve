//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=980&sca=2020

#include <stdio.h>
#include <iostream>

using namespace std;

enum eDirect {
	D_Right,
	D_Down,
	D_Left,
	D_Up,
	D_End,
};

int main() {

	int n;

	cout << "ют╥б : ";

	cin >> n;

	int** arrCh = new int* [n] { 0, };
	arrCh[0] = new int[n * n]{ 0, };
	for (int ii = 1; ii < n; ii++) {
		arrCh[ii] = arrCh[ii - 1] + n;
	}

	eDirect a_eDir = D_Right;
	int num = 1;
	int x = 0, y = 0;
	int count = 0;

	while (a_eDir < D_End) {
		switch (a_eDir) {
			case D_Right: {
				for(int ii = 0; ii < n - (2 * count) ; ii++)				
					arrCh[x][y++] = num++;
				
				a_eDir = D_Down;
				x++;
				y--;

				break;
			}
			case D_Down: {
				for (int ii = 1; ii < n - (2 * count); ii++)
					arrCh[x++][y] = num++;
				
				a_eDir = D_Left;
				x--;
				y--;				

				break;
			}
			case D_Left: {
				for (int ii = 1; ii < n - (2 * count); ii++)
					arrCh[x][y--] = num++;
				
				a_eDir = D_Up;
				x--;
				y++;				

				break;
			}
			case D_Up: {
				for (int ii = 2; ii < n - (2 * count); ii++)
					arrCh[x--][y] = num++;
				
				a_eDir = D_Right;
				x++;
				y++;				
				count++;

				break;
			}
		}
		
		if(count > 2 * n - 1)
			a_eDir = D_End;
	}

	for (int ii = 0; ii < n; ii++) {
		for (int jj = 0; jj < n; jj++) {
			cout << arrCh[ii][jj] << ' ';
		}
		cout << endl;
	}

	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}

