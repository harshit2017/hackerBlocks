//palindrome.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

bool palindrome(char str[], char *p, char *q)
{
	if (*p != *q)
	{
		return false;
	}
	palindrome(str, p + 1, q - 1);
	return true;
}

int main()
{
	char str[100];
	cin >> str;

	char *p = str;
	char *q = str + strlen(str) - 1;
	cout << boolalpha << palindrome(str, p, q);
}