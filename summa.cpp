#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << s;
    return 0;
}