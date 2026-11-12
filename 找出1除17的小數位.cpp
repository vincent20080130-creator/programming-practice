//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/12
#include <iostream>
#include <cstdlib>
using namespace std;
int n(int n1);
int n_plus(int n1);
int main(void)
{
	int a;
	if (cin >> a)
	{
		for (int i = 1; i <= a; i++)
		{
			long long b;
			cin >> b;
			cout << n(b) << " " << n_plus(b) << endl;
		}
	}
}
int n(int n1)
{
	int a[16], n = 1;
	for (int i = 0; i < 16; i++)
	{
		a[i] = (n * 10) / 17;
		n = (n * 10) % 17;
	}
	int r = (n1 - 1) % 16;
	return a[r];
}
int n_plus(int n2)
{
	int r = 0;
	for (int b = 1; b <= n2; b++)
	{
		r = r + n(b);
	}
	return r;
}
