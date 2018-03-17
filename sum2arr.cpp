//sum2arr.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;
int count, carry;

void input(int c[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin >> c[i];
	}
}

void sum2arr(int a[], int b[], int N, int M)
{
	int sum[1000] = {};
	if (N == M)
	{
		for (int i = 0; i < M; ++i)
		{
			sum[M - 1 - i] = (sum[M - 1 - i] + a[N - 1 - i] + b[M - 1 - i]) % 10;
			sum[M - 2 - i] = (a[N - 1 - i] + b[M - 1 - i]) / 10;
			++count;

		}
	}
	else if (N > M)
	{	int i;
		for ( i = 0; i < M; ++i)
		{
			sum[N - 1 - i] = (carry + a[N - 1 - i] + b[M - 1 - i]) % 10;
			carry = (a[N - 1 - i] + b[M - 1 - i] + carry) / 10;
			++count;


		}

		while (i < N)
		{
			sum[N - i - 1] = (a[N - i - 1] + carry) % 10;
			carry = (a[N - i - 1] + carry) / 10;
			++i;
			++count;
		}
	}
	else
	{	int i;
		for ( i = 0; i < N; ++i)
		{
			sum[M - 1 - i] = (carry + a[N - 1 - i] + b[M - 1 - i]) % 10;
			carry = (a[N - 1 - i] + b[M - 1 - i] + carry) / 10;
			++count;
		}
		while (i < M)
		{
			sum[M - i - 1] = (b[M - i - 1] + carry) % 10;
			carry = (b[M - i - 1] + carry) / 10;
			++i;
			++count;



		}
	}

	//print sum
	cout << endl;
	for (int i = 0; i < count; ++i)
	{
		cout << sum[i] << ", ";
	}
	cout << "END";
}

int main()
{
	int N, M;
	cin >> N;
	int a[1000] = {}, b[1000] = {};
	input(a, N);
	cin >> M;
	input(b, M);
	sum2arr(a, b, N, M);
}