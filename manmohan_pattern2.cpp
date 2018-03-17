//manmohan_pattern2.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;




int main()
{
	int N;
	cin >> N;
	int k;
	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= 2 ; ++j)

		{	if (i == 1)
			{	k = i;
				cout << k;
				break;
			}
			if (i > 1)
			{	k = i - 1;
				cout << k;
				for (int m = 1; m < k ; ++m)
				{
					cout << 0;
				}
				cout << k;
				break;
			}


		}
		cout << endl;
	}
}