//日期:2026/10/9
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int  i = 1;
	for (i = 1; i <= 500; i++)
	{
		bool OK = true;
		if (i % 7 != 0 || i % 3 != 0 || i % 2 == 0)
			OK = false;
		if (OK == true)
			cout << i << " ";
	}
		system("pause");
		return 0;
}