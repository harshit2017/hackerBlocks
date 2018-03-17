//remove_duplicates.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

void remove_duplicates(char s[])
{	char temp[1000];
	for (int i = 0; i != '\0'; ++i)
	{
		temp[i] = s[i];
	}
	int i = 0, count = 1;
	while (temp[i] != '\0')
	{	int j = 1;
		while (temp[i] == s[j])
		{
			s[j] = s[j + 1];
			++j, ++count;

		}
		i = i + count;
	}

}

int main()
{
	char string[1000];
	cin >> string;
	remove_duplicates(string);
}