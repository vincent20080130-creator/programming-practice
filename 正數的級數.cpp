//日期:2026/10/1
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
void main(void)
{
	float n, i = 1, sum = 0;
	cout << "please enter a number" << endl;
	cin >> n;
	while (n <= 0) {
		cout << n <<  " is not a positive number!" << endl;
		cout << "please enter a number" << endl;
		cin >> n;
	}
	cout << "sum=";
	while (i <= n) {
		sum = sum + i;
		cout << "+" << i;
		i = i + 1;
	}
	cout  <<"=" << sum << endl;
	system("pause");
}