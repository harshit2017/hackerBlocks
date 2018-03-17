//brackets_balanced.cpp
#include <iostream>
#include <cstring>
//#include <algorithm>
using namespace std;

bool balanced(char *p, char *q)
{

}

int main()
{
	char s[100];
	cin >> s;
	char *p = s;
	char *q = strlen(s) - 1 + s;
	cout << boolalpha << balanced(p, q);
}