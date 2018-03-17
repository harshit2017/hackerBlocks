//superpower.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

long power(int a, int b)
{	if (b == 0)
		return 1;
	if (b == 1)
	{
		return a;
	}
	return a * power(a, b - 1);
}

int main()
{
	int a, b;
	cin >> a >> b;
	int z = power(a, b);
	cout << z << endl;
}