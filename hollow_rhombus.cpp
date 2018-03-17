//hollow_rhombus.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;




int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		for (int j = N - 1; j > i ; --j)
		{
			cout << ' ';
		}
		if (i == 1 || i == N)
		{	for (int j = 1; j <= N; ++j)
			{
				cout << "*";

			}
		}
		else
		{
			cout << "*";
			for (int j = 1; j <= N - 2; ++j)
			{
				cout << ' ';
			}
			cout << "*";
		}
		cout << "\n";
	}
}