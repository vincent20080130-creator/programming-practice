#include <iostream>
#include <cstdlib>
using namespace std;
void main(void)
{
	int A, B;
	while (cin >> A >> B)
	{
		cout << (A * 2 + 100 - B) << endl;
	}
}