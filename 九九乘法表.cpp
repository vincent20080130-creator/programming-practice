//日期:2026/10/22
//姓名:蔡愷昕
//學號:1150640
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i = 0, j = 0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	for (i = 1; i <= 9; i+=3) {
		for (j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << "  ";
			cout << i + 1 << " * " << j << " = " << (i + 1) * j << "  ";
			cout << i + 2 << " * " << j << " = " << (i + 2) * j << endl;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}