//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/12
#include <iostream>
#include <cstdlib>
using namespace std;
bool is_prime(int n1);
int get_nth_prime(int n2);
int main(void)
{
	int i;
	cout << "Please enter a number:";
	cin >> i;
	cout << "The " << i << "th prime number is " << get_nth_prime(i) << endl;
	system("pause");
	return 0;
}
bool is_prime(int n1)
{
	bool is_prime = true;
	for (int a = 2; a < n1; a++)
	{
		if (n1 % a == 0)
			is_prime = false;
	}
	if (n1 == 1 || n1 == 0)
		is_prime = false;
	return is_prime;
}
int get_nth_prime(int n2)
{
	int a = 0, b = 0;
	while (a < n2)
	{
		b++;
		if (is_prime(b) == true)
			a++;
	}
	return b;
}