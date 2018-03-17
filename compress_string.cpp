#include <iostream>
using namespace std;

int main() {
  int a[][3] = {{1, 2, 3}, { 4, 5, 6}};
  char input[100] ;
  cin >> input;
  char* read = input;
  char* write = input;

  char c = input[0];
  int count = 0;
  while ( *read != '\0' ) {
    if ( *read == c ) {
      count++;
    }
    else {
      *write++ = c
                 * write++ = count + '0';
      count = 1;
    }
    c = *read;
    read++;
  }
  *write++ = c;
  *write++ = count + '0';
  *write = '\0';

  // cout << input << endl;
  // cout << a << endl;//address of first row of matrix
  // cout << a + 1 << endl;//address of 2nd row
  // cout << *(a + 1) << endl;//address of first element of second row
  // cout << a[0] << endl;//addressof first element of 0th row
  // cout << *(a[1]) << endl;//value at address
  // cout << &a << endl;//address of complete matrix
  // cout << &a[0][0] << endl;//address of first element
  // cout << (&a[0][0]) + 1 << endl;//address of 2nd element of matrix



  return 0;
}