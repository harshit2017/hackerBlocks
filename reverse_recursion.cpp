//reverse_recursion.cpp

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

void reverse(int a[], int be, int end)
{
	if (be >= end)
	{
		return;
	}

	int temp = a[be];
	a[be] = a[end];
	a[end] = temp;

	reverse(a, be + 1, end - 1);


}


int main()
{
	int N;
	cin >> N;
	int a[N];
	input(a, N);
	reverse(a, 0, N - 1);
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}

}