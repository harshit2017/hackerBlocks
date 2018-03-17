//first_index.cpp

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

int index(int a[], int be, int end, int M)

{
	if (be > end)
	{
		return -1;
	}
	if (a[be] == M)
	{
		return be;
	}
	index(a, be + 1, end, M);
}


int main()
{
	int N;
	cin >> N;
	int a[N];
	input(a, N);
	int M;
	cin >> M;
	cout << index(a, 0, N - 1, M);
}