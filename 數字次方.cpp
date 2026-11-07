//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/07
#include <iostream>
#include <cstdlib>
using namespace std;
float power(float x, int n);
void main(void) 
{
	double sum = 0;
	int c;
	cout << "Enter a number for power:";
	cin >> c;
	for (int i = 1; i <= c; i++)
	{
		sum = sum + (1 / power(2, i));
	}

	cout << "f1 =" << sum;
	system("pause");
}
float power(float x, int n)
{
	float r = 1;
	for (int  a = 1 ; a <= n; a++)
	{
		r = r * x;
	}
	return r;
}