//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/27
#include <iostream>
#include <cstdlib>
using namespace std;
void user_in(int A[]);
void com_gen(int ab[]);
int compare(int user[], int computer[]);
int main()
{
	srand(time(NULL));
	int com[6], user[6];
	int c = 0;
	com_gen(com);
	user_in(user);
	cout << "The users 6 numbers are:";
	for (int x = 0; x < 6; x++)
	{
		cout << user[x] << " ";
	}
	cout << endl;
	cout << "Computer six number are:";
	for (int b = 0; b < 6; b++)
	{
		cout << com[b] << " ";
	}
	cout << endl;
	cout << "User win number:";
	for (int i = 0; i < 6; i++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (user[x] == com[i])
			{
				cout << user[x] << " ";
			}
		}
	}
	cout << endl;
	cout << "Total win " << compare(user, com) << " numbers!" << endl;
}
void com_gen(int ab[])
{
	for (int i = 0; i < 6; i++)
	{
		int x = i;
		ab[i] = 1 + (rand() % 49);
		if (i > 0)
		{
			for (int y = 0; y < x; y++)
			{
				if (ab[i] == ab[y])
				{
					i--;
				}
			}
		}
	}
}
void user_in(int A[])
{
	int n = 0;
	while (n < 6)
	{
		int m = n;
		cout << "Number" << n + 1 << ":";
		cin >> A[n];
		int c = A[n];
		if (A[n] < 1 || A[n] > 49)
		{
			cout << "Error!" << endl;
			n--;
		}
		for (int i = 0; i < m; i++)
		{
			if (c == A[i])
			{
				cout << "Error!" << endl;
				n--;
			}
		}
		n++;
	}
}
int compare(int user[], int computer[])
{
	int win[6] ;
	int c = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (user[x] == computer[i])
			{
				win[c] = user[x];
				c++;
			}
		}
	}
	return c;
}
