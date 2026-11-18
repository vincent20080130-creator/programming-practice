//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/18
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
	string enter = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string line;
	while (getline(cin, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			char c = line[i];
			if (c == ' ')
				cout << ' ';
			else
			{
				int p = enter.find(c);
				if (p != string::npos)
					cout << enter[p - 1];
				else
					cout << c;
			}
		}
	}
}