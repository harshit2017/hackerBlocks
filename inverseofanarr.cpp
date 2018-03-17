//inverseofanarr.cpp

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
bool mirror(int a[], int b[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		int m = a[i];
		if(i!=b[m])
		{
			return false;
		}
	}
return;}


int main()
{
	int N;
	cin >> N;
	int a[N], b[N];
	input(a, N);
	input(b, N);
	cout << boolalpha << mirror(a, b, N);

}