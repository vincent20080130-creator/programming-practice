//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/19
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	long long i;
	while (cin >> i)
	{
		long long sum = 0;
		if (i == 0)
			break;
		while (i >= 10)
		{
			long long i1 = i;
			while (i1 > 0)
			{
				sum += i1 % 10;
				i1 /= 10;
				if (i1 == 0 && sum > 9)
				{
					i1 = sum;
					sum = 0;
				}
				if (i1 == 0 && sum < 10)
					i = sum;
			}
		}
		cout << i;
	}
	system("pause");
	return 0;
}