//togglecase.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

void toggle(char a[])
{	int len = strlen(a);
	for (int i = 0; i < len; ++i)
	{
		if ('A' <= a[i] && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
			cout << a[i];
		}
		else
		{
			a[i] = a[i] - 32;
			cout << a[i];
		}
	}
}

int main()
{
	char a[100];
	cin >> a;
	toggle(a);

}