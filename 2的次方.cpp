#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int c;
	while (cin >> c)
	{
		int num = 1;
		for (int n = 0; n < c;n++)
		{
			num = num * 2;
		}
		cout << num;
	}

}