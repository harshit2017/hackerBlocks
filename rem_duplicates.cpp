//rem_duplicates.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

char* rem_copy(char s[])
{
	char *prev = s;
	char *next = &s[1];
	//cout << prev << " " << next;
	while (*next != '\0')
	{
		if (*prev == *next)
		{	char *temp = next;
			while (*temp != '\0')
			{
				*temp = *(temp + 1);
				++temp;

			}
		} //cout << s << " " ;
		if (*prev != *next)
		{	++prev;
			++next;
		}

	}
	return s;
}

int main()
{
	char s[1000];
	cin >> s;
	rem_copy(s);
	cout  << rem_copy(s);

}