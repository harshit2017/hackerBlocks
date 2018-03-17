//indices.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;
int c[100];
static int count = 0;



void input(int a[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
}

void index(int a[], int be, int end, int M)

{


	if (be == end)
	{
		return;
	}
	if (a[be] == M)
	{
		c[count] = be;
		++count;
	}
	index(a, be + 1, end, M);
	//return;


}



int main()
{
	int N;
	cin >> N;
	int a[N];
	input(a, N);
	int M;
	cin >> M;
	index(a, 0, N, M );

	for (int i = 0; i < count ; ++i)
	{
		cout << c[i] << " ";
	}
}