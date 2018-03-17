//intersectionarr.cpp

#include <iostream>
//#include <cstring>
#include <algorithm>
using namespace std;

void input(int c[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cin >> c[i];
    }
}

int search(int a[], int lo, int hi, int M)
{   int mid = (lo + hi) / 2;
    if (lo > hi)
    {
        return -1;
    }
    if (a[mid] == M)
    {
        return a[mid];
    }
    else if (a[mid] < M)
    {
        lo = mid + 1;
        return search(a, lo, hi, M);
    }
    else
    {
        hi = mid - 1;
        return search(a, lo, hi, M);
    }


}

void intersec(int a[], int b[], int N)

{   int temp[N]  , j = 0;
    for (int i = 0; i < N; ++i)
    {   // cout << a[i] << "h\n";
        int m = search(b, 0, N, a[i]);
        // cout << m << " ";
        if (m != -1)
        {
            temp[j] = m;
            ++j;
        }
    }
    cout << "[";
    for (int k = 0; k < j; ++k)
    {   if (k == j - 1)
        {
            cout << temp[k];
            break;
        }
        cout << temp[k] << ", ";
    }
    cout << "]";
}



int main()
{
    int N;
    cin >> N;
    int a[1000], b[1000];

    input(a, N);
    input(b, N);
    sort(a, a + N);
    sort(b, b + N);
    //cout << a[0];
    intersec(a, b, N);


}