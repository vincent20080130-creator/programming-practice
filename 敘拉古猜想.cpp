//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/18
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	long long i, j;
	while (cin >> i >> j)
	{
		long long max = 0;
		if (i > j)
			swap(i, j);
		long long n = i;
		for ( n ; n <= j; n++)
		{
			long long c = 0;
			long long m = n;
			while (m != 1)
			{
				if (m % 2 == 0)
					m = m / 2;
				else
					m = (3 * m) + 1;
				c++;
			}
			if (c > max)
				max = c;
		}
		max++;
		cout << i << " " << j << " " << max << endl;
	}
}