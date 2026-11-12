//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/12
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
double fact(double n1);
double power(double n1, int n2);
int main(void)
{
	double x;
	double r = 0;
	cout << "Please enter a number x:";
	cin >> x;
	for (int b = 0; b <= 10; b++)
	{
		r = r + power(x, b) / fact(b);
	}
	cout << "answer=" << fixed << setprecision(5) << r << endl;
	system("pause");
	return 0;
}
double fact(double n1)
{
	double fact = 1;
	for (int f = 1; f <= n1 ; f++)
	{
		fact = fact * f;
	}
	return fact;
}
double power(double n1, int n2)
{
	double p = 1;
	for (int a = 1; a <= n2; a++)
	{
		p = p * n1;
	}
	return p;
}