//simple_input.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;



int main()
{
	int a[100];
	cin >> a[0];

	int sum = a[0], i = 1;

	while (sum >= 0) {
		cin >> a[i];
		sum = sum + a[i];
		++i;


	}
	for (int j = 0; j < i - 1; ++j)
	{
		cout << a[j] << endl;
	}
}
