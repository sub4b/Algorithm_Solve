//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=706&sca=2030

#include <iostream>

using namespace std;

int main() {

	int a = 0, b = 0, c = 0;

	cout << "ют╥б : ";

	cin >> a >> b >> c;

	int d = 0;	
	int count[10] = { 0, };

	d = a * b * c;
	cout << d << endl;

	int e = d;
	int f = d;

	while (e  > 0.1f) {
		f = e % 10;
		count[f] = count[f] + 1;
		e = e * 0.1f;
	}

	for (int ii = 0; ii < 10; ii++) {
		cout << count[ii] << endl;
	}

	return 0;
}