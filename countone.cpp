//countone.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

int one(int N)
{
	if (N == 0)
	{
		return 0;
	}
	if (N == 1)
	{
		return 1;
	}
	if (N % 2 != 0)
	{
		return 1 + one(N / 2);
	}

	return one(N / 2);
}


int main()
{
	int N;
	cin >> N;
	cout << one(N) << "\n";
}