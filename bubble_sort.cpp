//bubble_sort.cpp

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

void bubble_sort(int a[], int be, int end)
{
	if (be == end)
		return;
	if (be < end)
	{

		{
			for (int i = 0; i < end; ++i)
			{
				if (a[i] > a[i + 1])
				{
					int temp = a[i + 1];
					a[i + 1] = a[i];
					a[i] = temp;


				}
			}
		}

	}
	bubble_sort(a, be, end - 1);
}



int main()
{
	int a[100];
	int N;
	cin >> N;
	input(a, N);
	bubble_sort(a, 0, N - 1);
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}

}