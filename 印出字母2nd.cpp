//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/19
#include <iostream>
#include <cstdlib>
using namespace std;
void draw(int num);
int main(void)
{
	int i;
	cout << "Enter a number:";
	cin >> i;
	draw(i);
	system("pause");
	return 0;
}
void draw(int num)
{
	char l = 'A' , r = 'A';
	for (int a = 1; a <= num; a++)
	{
		for (int nl = 1; nl <= a; nl++)
		{
			if (l == 'Z')
			{
				cout << l << " ";
				l = 'A';
			}
			else
			{
				cout << l << " ";
				l++;
			}
		}
		cout << "\\ ";
		for (int nr = num; nr >= a; nr--)
		{
			if (r == 'Z')
			{
				cout << r << " ";
				r = 'A';
			}
			else
			{
				cout << r << " ";
				r++;
			}
		}
		cout << endl;
	}
}