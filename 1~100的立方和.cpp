#include <iostream>
#include <cstdlib>
using namespace std;
void main(void)
{
	int i = 1, n = 100, sum=0;
	while (i <= n) {
		sum = sum + i*i*i;
		i++;
	}
	cout << "sum=" << sum << endl;
	system("pause");
}