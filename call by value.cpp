//姓名:蔡愷昕
//學號:1150640
//日期:2026/11/19
#include <iostream>
#include <cstdlib>
	using namespace std;

	void addone(int a, int b);

	void main(void)
	{
		int x = 10, y = 20;

		//cout address of x, y:
		cout << "address of x:" << &x << endl;
		cout << "address of y:" << &y << endl;

		//cout before:
		cout << "-----Before-----\nx=" << x << endl;
		cout << "y=" << y << endl;
		//call addone
		addone(x, y);
		//cout after:
		cout << "-----After-----\nx=" << x << endl;
		cout << "y=" << y << endl;

		system("pause");
	}

	void addone(int a, int b)
	{
		a++;
		b++;
		//cout withinin the function:
		cout << "-----Within-----\na=" << a << endl;
		cout << "b=" << b << endl;
		//cout address of a, b
		cout << "address of a:" << &a << endl;
		cout << "address of b:" << &b << endl;
	}