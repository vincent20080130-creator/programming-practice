//姓名:蔡愷昕
//日期:2026/11/5
//學號:1150640
#include <iostream>
#include <cstdlib>
using namespace std;
int strlen(char str[]);
void main(void)
{
	char str[100];
	cout << "Input a string:";
	cin.getline(str, 100);
	cout << "My string length:" << strlen(str) << endl;
	cout << "C strlen:" << strlen(str) << endl;
}
int strlen(char str[100])
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}