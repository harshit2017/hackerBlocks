//recursion_sum.cpp
#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;


int sum(char c[], int i)
{
	static int  s = 0;
	if (c[i] == '\0')
	{
		return 0;
	}
	int d = c[i] - '0';
	s = sum(c, i + 1) + d;
	return s;
}

int main()
{
	char c[100];
	cin >> c;
	cout << sum(c, 0);
}