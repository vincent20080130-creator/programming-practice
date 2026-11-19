//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/19
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	long long a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			cout << "bye bye";
			break;
		}
		int r[10] = {0};
		int i = a;
		for ( i ; i <= b; i++)
		{
			long long x = i;
			while (x > 0)
			{
				r[x % 10]++;
				x /= 10;
			}
		}
		for (int d = 0; d <= 9; d++)
		{
			cout << r[d] << " ";
		}
	}
	system("pause");
}