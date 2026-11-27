//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/27
#include <iostream>
#include <cstdlib>
using namespace std;
void gen_random_number(int n[]);
int compareA(int a[], int b[]);
int compareB(int a[], int b[]);
int main()
{
	srand(time(NULL));
	int user_guess[4]{0}, E, random_number[4]{0};
	gen_random_number(random_number);
	while (compareA(user_guess, random_number) != 4)
	{
		cin >> E;
		for (int i = 0; i < 4; i++)
		{
			user_guess[i] = E / pow(10, 3 - i);
			E = E - (user_guess[i] * pow(10, 3 - i));
		}
		if (compareA(user_guess, random_number) == 4)
		{
			cout << "correct!" << endl;
		}
		else
		{
			cout << compareA(user_guess, random_number) << "A" << compareB(user_guess, random_number) << "B" << endl;
		}
	}
}
void gen_random_number(int n[])
{
	for (int i = 0; i < 4; i++)
	{
		n[i] = (rand() % 10);
		for (int x = 0; x < i; x++)
		{
			if (n[x] == n[i])
			{
				i--;
			}
		}
	}
}
int compareA(int a[] , int b[])
{
	int A = 0, B = 0;
	for (int x = 0; x < 4; x++)
	{
		if (a[x] == b[x])
		{
			A++;
		}
	}
	return A;
}
int compareB(int a[], int b[])
{
	int A = 0, B = 0;
	for (int x = 0; x < 4; x++)
	{
		if (a[x] == b[x])
		{
			A++;
		}
		for (int y = 0; y < 4; y++)
		{
			if (a[x] == b[y] && x != y)
			{
				B++;
			}
		}
	}
	return B;
}