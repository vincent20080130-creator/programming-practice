//日期:2026/10/1
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
void main(void)
{
	float rope = 3000;
	int day = 0;
	while (rope >= 5.0) {
		rope = rope / 2;
		day++;
	}
	cout << "day=" << day << endl;
	system("pause");
}