//日期:2026/10/17
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int A[100], grade = 0, sum = 0, n = 0;
	do 
	{
		cout << "Enter grade:";
		cin >> grade;
		if (0 <= grade && n < 100 && grade != -1) {
			A[n] = grade;
			sum += A[n];
			n++;
		}
	} while (grade != -1 && n < 100);
	double avr = (double)sum / n;
	cout << "Average is " << avr << endl;
	system("pause");
	return 0;
}