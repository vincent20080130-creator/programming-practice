//日期:2026/10/9
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int p = 0, num = 1, i = 2;

	for (num = 1; num <= 500; num++)
	{
		bool prime = true;
		for (i = 2; i < num; i++)
			if (num % i == 0)
				prime = false;
		if (num == 1)
			prime = false;
		if (prime == true)
		{
			cout << num << " ";
			p++;
			if (p % 10 == 0)
				cout << endl;
		}
		
	}
	system("pause");
	return 0;
}