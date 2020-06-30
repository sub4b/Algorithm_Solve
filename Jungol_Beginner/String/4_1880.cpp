//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1153&sca=2050


#include <iostream>

using namespace std;


int main() {

	char passCh[27] = { 0, };
	char chBfr[80] = { 0, };
	char chRe[80] = { 0, };

	cout << "ют╥б : ";

	cin >> passCh;
	
	getchar();
	//scanf_s("%[^\n]", chBfr, sizeof(chBfr));

	cin.getline(chBfr, 80);

	int num = 0;

	for (int ii = 0; ii < 80; ii++) {
		if (chBfr[ii] == 0)
			break;			

		num = (int)chBfr[ii];
		if (num >= 97) {
			num -= 97;
			chRe[ii] = passCh[num];
		}
		else if (num >= 65) {
			num -= 65;
			chRe[ii] = passCh[num] - 32;
		}
		else
			chRe[ii] = ' ';
	}

	cout << chRe;

	return 0;
}