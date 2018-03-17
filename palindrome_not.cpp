//palindrome_not.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

bool palindrome(char s[], int be, int end)
{
	if (be >= end)
	{
		return true;
	}
	if (s[be] != s[end])
	{
		return false;
	}
	palindrome(s, be + 1, end - 1);
}

int main()
{
	char s[1000];
	cin >> s;
	int len = strlen(s);
	cout << boolalpha << palindrome(s, 0, len - 1);
}