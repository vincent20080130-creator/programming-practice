#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	float A, B;
	cin >> A >> B;
	cout << fixed << setprecision(3) << B / A;
	return 0;
}