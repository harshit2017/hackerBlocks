

#include <iostream>
using namespace std;
int count = 0;

void tower(int n, char src[], char dest[], char helper[]) {
	if (n == 0) {
		return ;
	}

	tower(n - 1, src, helper, dest);
	++count;
	cout << "Move " << n << "th disc from " << src << " to " << dest << endl;
	tower(n - 1, helper, dest, src);
}



int main() {
	int n;
	cin >> n;
	char a[] = "T1";
	char b[] = "T2";
	char c[] = "T3";
	tower(n, a, b, c);
	cout << count;
}