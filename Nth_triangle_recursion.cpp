//Nth_triangle_recursion.cpp


#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;


int triangle(int N)
{
	if (N == 1)
	{
		return 1;
	}

	return N + triangle(N - 1);
}




int main()
{
	int N;
	cin >> N;
	cout << triangle(N) << "\n";

}