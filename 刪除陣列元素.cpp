//日期:2026/10/17
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int A[10] = { 11,22,100,33,44,55 };
	int D, n = 0;
	cout << "Enter the value to delete:";
	cin >> D;
	for (n = 0; n <= 9; n++) {
		if (A[n] == D)
		{
			for (int j = n; j < 9; j++) 
			{
				A[j] = A[j + 1];
			}
			A[9] = 0;
		}
	}
	cout << "Print all values:";
	for (int i = 0; i <=9 ; i++)
	{
		cout << A[i] << " ";
	}
	system("pause");
	return 0;
}

