//freq.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

char frequency(char s[])
{

	char max = s[0];
	int count1 = 1;
	char *p = s;
	char *q = s + 1;
	while (*q != '\0')
	{
		if (*p == *q)
		{
			++count1;
			++q;
		}

	}
	return max;
}

int main()
{
	char s[100];
	cin >> s;
	cout << frequency(s);
}