//reverse_string.cpp

#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

bool reverse(char *p, char *q)
{
	if (*p != *q)
	{
		return false;
	}
	reverse(p + 1, q - 1);
	return true;
}

int main()
{
	char str1[100], str2[100];
	cin >> str1 >> str2;
	char *p = str1;
	char *q = strlen(str2) + str2 - 1;

	cout << boolalpha << reverse(p, q);
}