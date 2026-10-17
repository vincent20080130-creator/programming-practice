//日期:2026/10/9
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	char ch;
	do {
		cout << "Input a char(a-z,A-Z) :";
		cin >> ch;
		if (97 <= ch && ch <= 122)
		{
			ch -= 32;
			cout << "Convert:" << ch << endl;
		}
		else if (65 <= ch && ch <= 90)
		{
			ch += 32;
			cout << "Convert:" << ch << endl;
		}
	} while (ch != '0');
	if (ch == '0')
		cout << "Bye!" << endl;
	int  count = 0;
	int change = 0;//設定印出換行數量
	char A = 'A';
	cout << "Input a number:";
	cin >> change;
	for (A = 'A'; A <= 'Z'; A++)
	{
		cout << A << " ";
		count++;
		if (count == change) 
		{
			count = 0;
			cout << endl;
		}
			
	}
	system("pause");
	return 0;
}