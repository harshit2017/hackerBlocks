//octal2bina.cpp
#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

void o2d(int& N)
{
	int dec = 0, base = 1;
	while (N > 0)
	{
		int rem = N % 10;
		dec = dec + base * rem;
		base *= 8;
		N /= 10;
	}
	N = dec;
	//cout << N << endl;

}


void d2b(int& N)
{
	int bin = 0, base = 1;
	while (N > 0)
	{
		int rem = N % 2;
		bin = bin + base * rem;
		base *= 10;
		N /= 2;
	}
	N = bin;
	//cout << N << endl;
}

int main()
{
	int N;
	cin >> N;
	o2d(N);
	d2b(N);
	cout << N << endl;
}