//日期:2026/10/17
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 5
int main()
{
	int score[MAX];
	float  sum = 0;
	int s, n, a = 0;
	cout << "Enter 0 stopping input!!" << endl; 
	for (n = 0; n <= 4;n++)
	{
		cout << "Input score:";
		cin >> s;
		if (s != 0)
		{
			score[n] = s;
			sum += score[n];
			a++;
		}
		if (s = 0)
			n = 5;
	}
	if (n >= 5)
		cout << "No more space!!" << endl;
	cout << "Average of all is " << sum / a << endl;
	system("pause");
	return 0;
}