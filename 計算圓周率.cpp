//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/12
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
double k = 4;
double pi(int n1);
void pi_process(int n1, int n2);
int main(void)
{
	int x , a , b;
	cout << "Please enter a number for caculate pi:";
	cin >> x;
	cout << "The answer is " << pi(x) << endl;
	cout << "Please enter Ranges:";
	cin >> a >> b;
	pi_process(a , b);
	system("pause");
	return 0;
}
double pi(int n1)
{ 
	int a1 = 1 , a2 = 3 , count_odd = 0;
	if (n1 % 2 != 0)
		count_odd = (n1 / 2) + 1;
	else
		count_odd = (n1 / 2);
	double odd = 0 , even = 0;
	for (int i1 = 1; i1 <= count_odd; i1++)
	{
		odd += k / a1;
		a1 += 4;
	}
	for (int i2 = 1; i2 <= (n1 / 2); i2 ++)
	{
		even -= k / a2;
		a2 += 4;
	}
	return odd + even;
}
void pi_process(int n1, int n2)
{
	int c = n1;
	for (n1; n1 <= n2; n1++)
	{
		int c1 = 1, c2 = 3;
		cout << c << ": pi=";
		c++;
		for (int i = 1; i < c; i++)
		{
			if (i % 2 != 0)
			{
				cout << " + " << k << "/" << c1;
				c1 += 4;
			}
			if (i % 2 == 0)
			{
				cout << " - " << k << "/" << c2;
				c2 += 4;
			}
		}
		cout << "=" << pi(n1) << endl;
	}
}