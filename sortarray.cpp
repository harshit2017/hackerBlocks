//sortarray.cpp

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

bool sort(int a[], int N)
{


	if (N == 1 || N == 0)
	{
		return true;
	}

	if (a[N - 1] < a[N - 2])
	{
		return false;
	}

	return sort( a, N - 1);



}


int main()
{
	int N;
	cin >> N;
	int a[N];
	input(a, N);
	bool luck =	sort(a, N);
	cout << boolalpha << luck;
	/*for (int i = 0; i < N; ++i)
	{
		cout << a[i];
	}*/

}