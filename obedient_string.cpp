//obedient_string.cpp

#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;

bool obedient_string(string s)
{	if (s.length() == 0)
		return true;

	if (s[0] == 'a')
	{
		if (s.substr(1, 2) == "bb" || s.substr(1, 1) == "a" || s.substr(1, 1) == "\0")
		{	if (s.substr(1, 2) == "bb")
			{
				if (s.substr(3, 1) == "a" || s.substr(3, 1) == "\0")
				{
					return obedient_string(s.substr(3));
				}

			}
			else
			{
				return obedient_string(s.substr(1));
			}

		}
		return false;
	}
	return false;


}

int main()
{
	string s;
	cin >> s;

	cout << boolalpha << obedient_string(s);
}