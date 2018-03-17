//hollowdiamond
#include <iostream>
using namespace std;
int main() {
	int N; cin >> N;
	int n = (N + 1) / 2;
	for (int curline = 1 ; curline <= N; ++curline)
	{	if (curline == 1 || curline == N )
		{
			for (int j = 1; j <= N; j++) {
				cout << "*";
				
			}
		}
		else if (curline <= n)
		{
			for (int j = curline ; j <= n; ++j)
			{
				cout << "*";
			}

			for (int space = 1 ; space <= 2 * curline - 3; ++space)
			{
				cout << " ";
			}
			for (int j = curline ; j <= n; ++j)
			{
				cout << "*";
			}
			
		}
		else if (curline > n) {
			for (int j = n ; j <= curline; ++j)
			{
				cout << "*";
			}

			for (int space = 1 , i = N - curline; space <= 2 * i - 1  ; ++space)
			{
				cout << " ";
			}
			for (int j = n ; j <= curline; ++j)
			{
				cout << "*";
			}
			
		}

		cout << endl;

	}
}