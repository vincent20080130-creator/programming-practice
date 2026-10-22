//日期:2026/10/22
//姓名:蔡愷昕
//學號:1150640
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i = 0, j = 0, n ;
	cout << "Enter a number:";
	cin >> n;
	cout << "[A]" << endl;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << "[B]" << endl;
	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1; j--) {
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "[C]" << endl;
	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1; j--) {
			cout << "*";
		}
		for (j = 1; j <= n - i + 1; j++) {
			cout << " ";
		}
		for (j = 1; j <= n - i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}