//string_odd-even.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

void mystring(char a[])
{
	int len = strlen(a);
	for (int i = 0; i < len; ++i)
	{
		if (i % 2 == 0)
		{
			a[i] = a[i] + 1;
			cout << a[i];
		}
		else
		{
			a[i] = a[i] - 1;
			cout << a[i];
		}
	}
}


int main()
{
	char s[100];
	cin >> s;
	mystring(s);
}