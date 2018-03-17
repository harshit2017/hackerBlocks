//median2arr.cpp

#include <iostream>
//#include <cmath>
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

int med(int a[], int b[], int lo, int hi)
{	int mid = (lo + hi) / 2;
	int M1 = a[mid];
	int M2 = b[mid];
	if (hi - lo == 2)
	{
		return (max(a[lo], b[lo]) + min(a[hi - 1], b[hi - 1])) / 2;
	}
	if (M1 == M2)
	{
		return M1;
	}
	else if (M1 < M2)
	{
		lo = mid;
		return med(a, b, lo, hi);
	}
	else
	{
		hi = mid;
		return med(a, b, lo, hi);

	}
}







int main()
{	int N;
	cin >> N;

	int a[N], b[N];
	input(a, N);
	input(b, N);

	int m = med(a, b, 0, N);

	cout << m << endl;


}