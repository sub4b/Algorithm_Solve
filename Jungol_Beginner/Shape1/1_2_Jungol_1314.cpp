//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2072&sca=2010

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int num = 0;	
	cout << "입력 : ";
	cin >> num;

	char arrCh[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	//6이상시 예외 처리

	int count = 0;
	char** ch = (char**)malloc(num * sizeof(char*));
	for (int ii = 0; ii < num; ii++) {
		ch[ii] = (char*)malloc(num * sizeof(char));
		if (ii % 2 == 0) {
			for (int jj = 0; jj < num; jj++) {
				ch[ii][jj] = arrCh[count];
				count++;
			}
		}
		else {
			for (int jj = num - 1; jj >= 0; jj--) {
				ch[ii][jj] = arrCh[count];
				count++;
			}
		}
	}

	for (int ii = 0; ii < num; ii++) {		
		for (int jj = 0; jj < num; jj++) {
				cout << ch[jj][ii];
		}
		cout << endl;		
	}

	for (int ii = 0; ii < num; ii++) {
		free(ch[ii]);
	}
	free(ch);

	return 0;
}