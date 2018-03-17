//string_num.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

void convert(char s[], int a[], int be)
{
	if (s[be] == '\0')
		return;
	a[be] = s[be] - '0';
	convert(s, a, be + 1);
}

int main()
{
	char s[100];
	int a[100];
	cin >> s;
	int len = strlen(s);
	convert(s, a, 0);
	for (int i = 0; i < len; ++i)
	{
		cout << a[i];
	}
}