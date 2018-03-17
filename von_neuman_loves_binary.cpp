//von_neuman_loves_binary.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

void input(int c[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin >> c[i];
	}
}

void decimal(int a[], int N)
{
	for (int i = 0; i < N; ++i)
	{	int dec = 0, base = 1;
		while (a[i] > 0)
		{	int rem = a[i] % 10;
			dec = dec + base * rem;
			base *= 2;
			a[i] = a[i] / 10;

		}

		cout << dec << "\n";
	}
}


int main()
{
	int N;
	cin >> N;
	int a[N];
	input(a, N);
	decimal(a, N);
}