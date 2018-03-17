

#include <iostream>

using namespace std;

void input(int a[][100], int M, int N)
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
		//print top row
		if (top <= bottom)
		{
			for (int i = left; i <= right; ++i)
			{
				cout << a[top][i]<<" ";
			}
			++top;
		}
		if (left <= right)//print last column
		{
			for (int i = top; i <= bottom; ++i)
			{
				cout << a[i][right]<<" ";
			}
			--right;
		}
		if (top <= bottom)//print bottom row
		{
			for (int i = right; i >= left; --i)
			{
				cout << a[bottom][i]<<" ";
			}
			--bottom;
		}
		if (left <= right)//print first column
		{
			for (int i = bottom; i >= top; --i)
			{
				cout << a[i][left]<<" ";
			}
			++left;
		}
	}
}



int main()
{
	int a[100][100];
	int M, N;
	cin >> M >> N;
	input(a, M, N);

	spiral(a, M, N);
}