//manmohan_loves_patterns_1.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;



int main()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i)
	{	if ((i >= 4) && (i % 2 == 0))

		{
			cout << 1;
			for (int j = 1; j <= i - 2; ++j)
			{
				cout << 0;
			}
			cout << 1;
		}


		else
		{	for (int j = 1; j <= i; ++j)
			{
				cout << 1;
			}
		}
		cout << "\n";
	}

}