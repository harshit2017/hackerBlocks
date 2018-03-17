//f2c.cpp


#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

int f2c(int f)
{
	int c = ((5.0 / 9) * (f - 32) );
	return c;
}


int main()
{
	int Min, Max, Step, c;
	cin >> Min >> Max >> Step;
	if ((0 < Min < 100) && (Min < Max < 500) && (0 < Step))

		while (Min <= Max)
		{
			c = f2c(Min);
			cout << Min << '\t' << c << endl;
			Min = Min + Step;
		}
}