//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/07
#include <iostream>
#include <cstdlib>
using namespace std;
int abs(int a);
bool is_odd(int n2);
float add(float n1, float n2, float n3);
int max(int n1, int n2, int n3);
void main(void)
{
	int n1 , n2;
	cout << "Enter one number=";
	cin >> n1;
	cout << "abs(" << n1 << ")=" << abs(n1) << endl;
	cout << "Enter one number:";
	cin >> n2;
	if (is_odd(n2) == true)
		cout << n2 << " is an odd number" << endl;
	else
		cout << n2 << " is an even number" << endl;
	float N1, N2, N3;
	cout << "Enter 3 number:" << endl;
	cout << "num1:";
	cin >> N1;
	cout << "num2:";
	cin >> N2;
	cout << "num3:";
	cin >> N3;
	cout << "sum = " << add(N1, N2, N3) << endl;
	int num1, num2, num3;
	cout << "Enter 3 integer:" << endl;
	cout << "num1:";
	cin >> num1;
	cout << "num2:";
	cin >> num2;
	cout << "num3:";
	cin >> num3;
	cout << "Max is " << max(num1, num2, num3) << endl;
	system("pause");
}
int abs(int a)
{
	if (a < 0)
		a = -a;
	return a;
}
bool is_odd(int n2)
{
	bool odd = true;
	if (n2 % 2 == 0)
		odd = false;
	return odd;
}
float add(float n1, float n2, float n3)
{
	float sum = n1 + n2 + n3;
	return sum;
}
int max(int n1, int n2, int n3)
{
	int max = 0;
	if (n1 > max)
		max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	return max;
}