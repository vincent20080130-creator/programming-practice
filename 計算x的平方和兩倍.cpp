//日期:2026/10/9
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	float x = 1.0;
	cout << "x" << "\t" << "x*x" << "\t" << "x+x" << endl;
	for (x = 1.0; x <= 10; x += 0.5)
	{
		cout << x << "\t" << x * x << "\t" << x + x << endl;
	}
	system("pause");
	return 0;
}