//姓名:蔡愷昕
//日期:2026/11/5
//學號:1150640
#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int num1, int num2);
int main(void)
{
	int num1, num2 , R;
	cout << "First number=";
	cin >> num1;
	cout << "Second number=";
	cin >> num2;
	cout << "Gcd(" << num1 << ", " << num2 << ")=" << gcd(num1 , num2) << endl;
	system("pause");
	return 0;
}
int gcd(int num1, int num2)
{
	int big = num1, small = num2;
	int R = 1;
	while (R != 0) {
		if (big < small)
			swap(big, small);
		R = big % small;
		big = small;
		small = R;
	}
	return big;
}