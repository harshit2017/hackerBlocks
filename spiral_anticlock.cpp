//spiral_anticlock.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

void inputarr(int a[][100], int M, int N)
{
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> a[i][j];
		}
	}
}

void spiral(int a[][100], int M, int N)
{
	int left = 0, right = N - 1, top = 0, bottom = M - 1;
	while (left <= right || top <= bottom)
	{
		if (top <= bottom) //print left column
		{	for (int i = top; i <= bottom ; ++i)
			{
				cout << a[i][left] << ", ";
			}
			++left;

		}
		if (left <= right) //print bottom row
		{
			for (int i = left; i <= right ; ++i)
			{
				cout << a[bottom][i]<<", ";
			}
			--bottom;
		}
		if (top <= bottom) //print right column
		{
			for (int i = bottom; i >= top; --i)
			{
				cout << a[i][right]<< ", ";
			}
			--right;
		}
		if (top <= bottom) //print top row
		{	for (int i = right; i >= left; --i)
			{
				cout << a[top][i]<< ", ";

			}
			++top;
		}
	}
	cout << "END";
}
int main()
{	int M, N;
	cin >> M >> N;
	int a[100][100];
	inputarr(a, M, N);
	spiral(a, M, N);
}