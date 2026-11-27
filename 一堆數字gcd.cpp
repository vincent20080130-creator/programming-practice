//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/27
#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int a, int b);
int main()
{
	int n[100] , c;
	int ans[100];
	cin >> c;
	cin.ignore();
	for (int i = 0; i < c; i++)
	{
		int MAX = 0 , d = 0;
		bool en = true;
		while (en == true)
		{
			cin >> n[d];
			d++;
			if (cin.get() == '\n')
			{
				en = false;
			}
		}
		for (int j = 0; j < d; j++)
		{
			for (int t = 0; t < j; t++)
			{
				if (gcd(n[j], n[t]) > MAX)
				{
					MAX = gcd(n[j], n[t]);
				}
			}
		}
		ans[i] = MAX;
	}
	for (int i = 0; i < c; i++)
	{
		cout << ans[i] << endl;
	}
}
int gcd(int a, int b)
{
	if (a < b)
	{
		swap(a, b);
	}
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}