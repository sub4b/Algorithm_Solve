//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=608&sca=2020

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int height = 0;

	do {
		cout << "ют╥б : ";
		cin >> height;
		if (height % 2 == 0)
			cout << "INPUT ERROR!" << endl;		
	} while (height % 2 == 0);

	char** arrCh = new char* [height] { 0, };
	arrCh[0] = new char[height * (height + height * 0.5f)]{ 0, };
	for (int ii = 1; ii < height; ii++) {
		arrCh[ii] = arrCh[ii - 1] + (int)(height + height * 0.5f);
	}

	for (int ii = 0; ii < height; ii++) {
		for (int jj = 0; jj < (int)(height + height * 0.5f); jj++) {
			if (ii < height * 0.5f) {
				if (jj >= ii && jj < ii * 3 + 1)
					cout << '*';
				else
					cout << ' ';
			}
			else {
				if (jj >= height - ii - 1 && jj < (height - ii - 1) * 3 + 1)
					cout << '*';
				else
					cout << ' ';					
			}
		}
		cout << endl;
	}
	
	delete[] arrCh[0];
	delete[] arrCh;

	return 0;
}