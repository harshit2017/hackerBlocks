//odd_even_recursion.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

void odd(int N, int M)
{
	if (M == N)
	{
		cout << M << "\n";
		return;
	}
	odd(N, M + 2);
	cout << M << "\n";
	return;
}

void even(int N)
{	if (N == 0)
	{
		return;
	}
	if (N == 2)
	{
		cout << 2 << "\n";
		return;
	}
	even(N - 2);
	cout << N << "\n";

}



int main()
{
	int N;
	cin >> N;
	if (N % 2 != 0)
	{
		odd(N, 1);
		even(N - 1);
	}
	else
	{
		odd(N - 1, 1);
		even(N);
	}
}