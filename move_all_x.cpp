//move_all_x.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

void move_x(char a[], int be, int end)
{

	if (be > end)
	{
		return;
	}
	if (a[be] == 'x')
	{	int q = be;
		int temp = a[q];
		while (q < end)
		{
			a[q] = a[q + 1];
			++q;

		}
		a[end] = temp;
	}
	move_x(a, be + 1, end);
}

int main()
{
	char a[100];
	cin >> a;
	int end = strlen(a) - 1;
	move_x(a, 0, end);
	cout << a;
}