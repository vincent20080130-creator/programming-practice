//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/18
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a, b ;
	while (cin >> a >> b) 
	{
		if (a == 0 && b == 0 )
			break;
		int ca = 0, carry = 0;
		while (a > 0 || b > 0 || carry > 0)
		{
			int sum = (a % 10) + (b % 10) + carry;
			carry = sum / 10;
			if (carry > 0)
				ca++;
			a /= 10;
			b /= 10;
		}
		if (ca == 0)
			cout << "No carry operation." << endl;
		else if (ca == 1)
			cout << "1 carry operation." << endl;
		else
			cout << ca << " carry operations." << endl;
	}
}