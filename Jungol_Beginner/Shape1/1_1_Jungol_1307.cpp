//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2071&sca=2010

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int x = 0;
	cin >> x;
	char ch[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };	
	char** arrChar = (char**)malloc(x * sizeof(char*));

	int num = x * x - 1;
	int arrSize = sizeof(ch);
	if (num > arrSize - 1)
		num %= arrSize - 1;

	for (int ii = 0; ii < x; ii++) {
		arrChar[ii] = (char*)malloc(x * sizeof(char));
		for (int jj = 0; jj < x; jj++) {			
			arrChar[ii][jj] = ch[num];
			num--;
			if (num < 0)
				num = arrSize - 2; //왜 2로 해야 원하는 결과가? 확인필요.
		}
	}

	for (int jj = 0; jj < x; jj++) {
		for (int ii = 0; ii < x; ii++) {
			cout << arrChar[ii][jj] << ' ';			
		}
		cout << endl;
	}

	for (int i = 0; i < x; i++) {
		free(arrChar[i]);
	}
	free(arrChar);


	return 0;
}