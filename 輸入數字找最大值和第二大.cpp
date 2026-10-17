//日期:2026/10/1
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
void main(void)
{
	double n = 0, i = 0, sum = 0, average = 0;
	double max = 0 , max2 = 0;
	cout << "please enter several numbers,if you want to stop,please enter -1" << endl;
	cout << "enter next number: ";
	cin >> n;
	while (n != -1) {
		i++;
		sum = sum + n;
		if (i == 1)
			max = n, max2 = n;
		else {
			if (n > max)
				max2 = max, max = n;
			else if (n < max && (n > max2 || max2 == max))
				max2 = n;
		}
		cout << "enter next number: ";
		cin >> n;
	}
	if (i > 0) {
		cout << "largest number is " << max << endl;
		cout << "second largest is " << max2 << endl;
		cout << "total: " << i << " numbers" << endl;
		cout << "average is " << sum / i << endl;
	}
	else
		cout << "no numbers entered";
	system("pause");
}
