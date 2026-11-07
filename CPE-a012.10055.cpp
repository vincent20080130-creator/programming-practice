//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/07
#include <iostream>
#include <cstdlib>
using namespace std;
int gap(int h, int o);
void main(void)
{
	int h, o;
	while (cin >> h >> o)
		cout << gap(h, o);
	system("pause");
}
int gap(int h, int o)
{
	int r = h - o;
	if (r < 0)
		r = -r;
	return r;
}