//array_palin.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

void input(int a[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
}

bool palin(int a[], int be, int end)
{
	if (be >= end)
	{
		return true;
	}
	if (a[be] != a[end])
	{
		return false;
	}
	palin(a, be + 1, end - 1);
}

int main()
{	int N;
	cin >> N;
	int a[1000];
	input(a, N);
	cout << boolalpha << palin(a, 0, N - 1);
}