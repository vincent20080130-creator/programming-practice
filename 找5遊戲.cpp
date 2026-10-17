#include <iostream>
#include <cstdlib>
using namespace std;
void main(void)
{
	float n;
	cout << "please enter a number" << endl;
	cin >> n;
	while (n != 5) {
		cout << "wrong answer,tyr again !" << endl;
		cin >> n;
	}
	cout << "you got it !";
	system("pause");
}