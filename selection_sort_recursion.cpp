//selection_sort_recursion.cpp

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

void selection_sort(int a[], int be, int end)
{
	if (be == end)
	{
		return;
	}

	if (be < end)
	{
		int min = a[be], pos = be;
		for (int i = be; i < end; ++i)
		{
			if (min > a[i + 1])
			{
				min = a[i + 1];
				pos = i + 1;
			}
		}
		int temp = a[be];
		a[be] = min;
		a[pos] = temp;

	}
	selection_sort(a, be + 1, end);
}


int main()
{
	int a[100];
	int N;
	cin >> N;
	input(a, N);
	selection_sort(a, 0, N - 1);
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
}