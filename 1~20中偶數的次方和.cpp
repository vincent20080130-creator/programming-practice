//日期:2026/10/1
//學號:1150640
//姓名:蔡愷昕
#include<iostream>
#include<cstdlib>
using namespace std;
void main(void)
{
	int i = 1, sum = 0;
	while (i <= 20) {
		i++;
		if (i % 2 == 0)
			cout << i << " ", sum = sum + i*i;
	}
	cout << "sum=" << sum << endl;
	system("pause");
}