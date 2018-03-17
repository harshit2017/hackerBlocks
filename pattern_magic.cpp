//pattern_magic.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;



int main()
{



	for (int i = 1; i <= 9; ++i)
	{
		if (i == 1 || i == 9)
		{
			for (int j = 1; j <= 9 ; ++j)
			{
				cout << "*";
			}
		}

		else if (i <= 5)
		{
			for (int j = i; j <= 5 ; ++j)//print star
			{
				cout << "*";
			}

			for (int j = 1 ; j <= 2 * i - 3  ; ++j) //print space
			{
				cout << " ";
			}
			for (int j = i; j <= 5 ; ++j)//print star
			{
				cout << "*";
			}
		}
		else
		{
			for (int j = 5; j <= i  ; ++j) //print star
			{
				cout << "*";
			}

			for (int j = 1 ; j <= 2 * (9 - i) - 1 ; ++j) //print space
			{
				cout << " ";
			}

			for (int j = 5; j <= i  ; ++j) //print star
			{
				cout << "*";
			}

		}
		cout << "\n";

	}

}
