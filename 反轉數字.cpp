//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/12
#include <iostream>
#include <cstdlib>
using namespace std;
int reverse(int n1);
int main(void)
{
	int a;
	cout << "Enter a number:";
	cin >> a;
	cout << a << " reverse number " << reverse(a) << endl;
	cout << "3 times number:" << 3 * reverse(a) << endl;
	system("pause");
	return 0;
}
int reverse(int n1)
{
	int r = 0 , n = 0;
	while (n1 > 1)
	{
		r = r * 10 + n1 % 10;
		n1 = n1 / 10;
		n++;
	}
	return r;
}