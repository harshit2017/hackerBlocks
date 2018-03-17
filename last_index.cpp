//last_index.cpp

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

int last_index(int a[], int be, int end, int M)
{
	if (end < be)
	{
		return -1;
	}
	if (a[end] == M)
	{
		return end;
	}
	last_index(a, be, end - 1, M);

}

int main()
{
	int N;
	cin >> N;
	int a[N];
	input(a, N);
	int M;
	cin >> M;
	cout << last_index(a, 0, N - 1, M);
}