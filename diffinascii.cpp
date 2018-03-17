//diffinascii.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

void diff(char a[])
{	int len = strlen(a);
	for (int i = 0; i < len; ++i)
	{	if (i == len - 1)
		{	cout << a[i];
			return;
		}
		cout << a[i] << a[i + 1] - a[i];
	}
}



int main()
{
	char a[100];
	cin >> a;
	diff(a);
}