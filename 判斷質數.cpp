//日期:2026/10/8
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int num, i = 2;
	bool isprime = true;
	do
	{
		cout << "Enter a posituve number :";
		cin >> num;
		if (num <= 0) {
			cout << num << " is not a positive number!" << endl;
		}
	} while (num <= 0);
	if (num == 1)
		isprime = false;
	for (i == 2; i < num; i++) {
		if (num % i == 0)
			isprime = false;
	}
if (isprime == true)
	cout << num << " is a prime number." << endl;
else
	cout << num << " is not a prime number." << endl;
	system("pause");
	return 0;
 }
	
