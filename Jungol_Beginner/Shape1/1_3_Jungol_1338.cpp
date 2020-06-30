//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2074&sca=2010

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "ют╥б : ";
	cin >> a;

	char ch[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	//char** ch = (char**)malloc(a * sizeof(char*));	
	char** arrCh = new char* [a] {0};
	arrCh[0] = new char[a * a]{ 0 };

	for (int ii = 1; ii < a; ii++) {
		arrCh[ii] = arrCh[ii-1] + a;
	}

	int i, j, k, num = 0;
	for (i = 0; i < a; i++) {
		for (j = i, k = a - 1; j < a; j++, k--) {
			arrCh[j][k] = ch[num++];
			if (num > 25)
				num = 0;
		}
	}

	//int jj, kk;
	//for (int ii = 0; ii < a; ii++) {
	//	for (jj = 0; jj < a; jj++) {
	//		arrCh[jj][ii] = ch[num];
	//		num++;
	//	}		
	//}

	for (int ii = 0; ii < a; ii++) {
		for (int jj = 0; jj < a; jj++) {
			cout << arrCh[ii][jj];
		}
		cout << endl;
	}

	delete(arrCh[0]);
	delete(arrCh);

	return 0;
}