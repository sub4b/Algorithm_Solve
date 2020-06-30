//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=965&sca=2030

#include <iostream>

using namespace std;

int main() {

	int a_1st = 0;
	int a_2nd_1 = 0;
	int a_2nd_10 = 0;
	int a_2nd_100 = 0;

	cout << "ют╥б : ";

	scanf_s("%d %1d%1d%1d", &a_1st, &a_2nd_100, &a_2nd_10, &a_2nd_1,
		sizeof(int), sizeof(int), sizeof(int), sizeof(int));

	cout << a_1st * a_2nd_1 << endl
		<< a_1st * a_2nd_10 << endl
		<< a_1st * a_2nd_100 << endl
		<< a_1st * a_2nd_1 + a_1st * a_2nd_10 * 10 + a_1st * a_2nd_100 * 100 << endl;

	return 0;
}