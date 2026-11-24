#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int  dig;
	string num;
	bool t[7][10] = {
		{1,0,1,1,0,1,1,1,1,1},
		{1,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,0,0,1,1,1},
		{0,0,1,1,1,1,1,0,1,1},
		{1,0,1,0,0,0,1,1,1,0},
		{1,1,0,1,1,1,1,0,1,1},
		{1,0,1,1,0,1,1,0,1,1}
	};
	while (cin >> dig >> num)
	{
		if (dig == 0 && num == "0")
		{
			system("pause");
			return 0;
		}
		for (int r = 0; r <= 2 * dig + 2; r++)
		{
			for (int i = 0; i < num.size(); i++)
			{
				int d = num[i] - '0';
				if (r == 0)
				{
					cout << " ";
					if (t[0][d] == 1)
					{
						for (int x = 0; x < dig; x++)
							cout << "-";
					}
					else
					{
						for (int x = 0; x < dig; x++)
							cout << " ";
					}
					cout << " ";
				}
				else if (r >= 1 && r <= dig)
				{
					if (t[1][d] == 1)
						cout << "|";
					else
						cout << " ";
					for (int x = 0; x < dig; x++)
						cout << " ";
					if (t[2][d] == 1)
						cout << "|";
					else
						cout << " ";
				}
				else if (r == dig + 1)
				{
					cout << " ";
					if (t[3][d] == 1)
						for (int x = 0; x < dig; x++)
							cout << "-";
					else
						for (int x = 0; x < dig; x++)
							cout << " ";
					cout << " ";
				}
				else if (r >= dig + 2 && r <= 2 * dig + 1)
				{
					if (t[4][d] == 1)
						cout << "|";
					else
						cout << " ";
					for (int x = 0; x < dig; x++)
						cout << " ";
					if (t[5][d] == 1)
						cout << "|";
					else
						cout << " ";
				}
				else
				{
					cout << " ";
					if (t[6][d] == 1)
						for (int x = 0; x < dig; x++)
							cout << "-";
					else
						for (int x = 0; x < dig; x++)
							cout << " ";
					cout << " ";
				}
				if (i < num.size() - 1)
					cout << " ";
			}
			cout << "\n";
		}
	}
}