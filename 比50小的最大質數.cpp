//日期:2026/10/17
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int p[50];
	int num = 50 , n = 1, i = 0;
	for (num = 1; num <= 50; num++) 
	{
		bool prime = true;
		for (n = 1; n <= num; n++)
		{
			if (num % n != 0)
				prime = false;
			if (prime == true)
			{
				p[i] = num;
				i++;
			}
		}
	}
	int Max = 0;
	for (int a = 0; a <= 49; a++) 
	{
		if (p[a] > Max)
			Max = p[a];
	}
	cout << "ans=" << Max;
	system("pause");
	return 0;
}